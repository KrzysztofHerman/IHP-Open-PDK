########################################################################
#
# Copyright 2023 IHP PDK Authors
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
########################################################################
__version__ = "$Revision: #3 $"

from cni.dlo import *
from .thermal import *
from .geometry import *
from .utility_functions import *

import math


def calculate_points_on_line(length, min_spacing, point_diameter):

    effective_spacing = min_spacing + point_diameter  # Include diameter in spacing
    num_points = int(length // effective_spacing)
    
    spacing = length / num_points if num_points > 0 else 0
    
    points = []
    
    for i in range(num_points + 1): 
        points.append(round(i * spacing, 3))  
    
    return points, spacing

def create_rectangle(layer, x1, y1, x2, y2):
    """Helper function to create a rectangle."""
    return Rect(layer, Box(x1, y1, x2, y2))

def adjust_positions(positions, offset):
    """Apply an offset to all positions."""
    return [pos + offset for pos in positions]

def adjust_to_grid(positions, grid_res):
    """Adjust positions to the nearest grid resolution."""
    return [round(pos / grid_res) * grid_res for pos in positions]


def calculate_and_create_squares(locintlayer, x_positions, y_positions, square_size, grid_res):
    """
    Generate square shapes based on x and y positions.

    Args:
        locintlayer: The layer where squares are placed.
        x_positions: List of x-coordinates for the squares.
        y_positions: List of y-coordinates for the squares.
        square_size: The size of the square.
        grid_res: The grid resolution for snapping positions.
    """
    # Adjust positions to the grid resolution
    x_positions = adjust_to_grid(x_positions, grid_res)
    y_positions = adjust_to_grid(y_positions, grid_res)

    # Create squares at adjusted positions
    for x in x_positions:
        for y in y_positions:
            x2 = x + square_size
            y2 = y + square_size
            create_rectangle(locintlayer, x, y, x2, y2)


class gring(DloGen):
    @classmethod
    def defineParamSpecs(cls, specs):
        # Define parameters and default values
        techparams = specs.tech.getTechParams()

        SG13_TECHNOLOGY = techparams["techName"]
        suffix = ""
        if "SG13G2" in SG13_TECHNOLOGY:
            suffix = "G2"
        if "SG13G3" in SG13_TECHNOLOGY:
            suffix = "G3"

        CDFVersion = techparams["CDFVersion"]
        defL = techparams["gring_defL"]
        defW = techparams["gring_defW"]

        specs("cdf_version", CDFVersion, "CDF Version")
        specs("Display", "Selected", "Display", ChoiceConstraint(["All", "Selected"]))
        specs("well", "sub", "Well", ChoiceConstraint(["sub", "nwell"]))

        specs("w", defW, "Width")
        specs("l", defL, "Length")

    def setupParams(self, params):
        self.grid = self.tech.getGridResolution()
        self.techparams = self.tech.getTechParams()

        self.w = Numeric(params["w"]) * 1e6
        self.l = Numeric(params["l"]) * 1e6
        self.well = params["well"]

    def genLayout(self):
        #*************************************************************************
        #*
        #* Layer Definitions
        #*
        #*************************************************************************
        
        #*************************************************************************
        #*
        #* Generic Design Rule Definitions
        #*
        #*************************************************************************
        
        # ptap1/ntap1 gets 2 Pins -> value must be 3
        dbReplaceProp(self, 'pin#', 3)
        
        #*************************************************************************
        #*
        #* Main body of code
        #*
        #*************************************************************************    
        nwelllayer = Layer("NWell")
        psdlayer = Layer("pSD")
        activlayer = Layer("Activ")
        textlayer = Layer("TEXT")
        metal1_layer = Layer("Metal1")
        locintlayer = Layer("Cont")  # Layer for the square shape
        bulay_layer = Layer('nBuLay')

        Cell = self.__class__.__name__

        grid = self.techparams["grid"]
        endcap = self.techparams["M1_c1"]
        cont_size = self.techparams['Cnt_a']
        cont_dist = self.techparams['Cnt_b']
        cont_metal_over = self.techparams['M1_c']
        cont_metal_endcap = self.techparams['M1_c1']
        ndiff_over = self.techparams['NW_c']          # Nwell enc. of n+Activ in nWell
        cont_diff_over = self.techparams['Cnt_c']
        psdActiv = self.techparams["pSD_c1"]
        nsdActiv = self.techparams["nSDB_e"]
        contbar_min_len = self.techparams["CntB_a1"]
        contbar_min_width = self.techparams["CntB_a"]
        contbar_act_enc = self.techparams["CntB_c"]
        minpSD = self.techparams["pSD_a"]
        minpSD_enc = self.techparams["pSD_c1"]
        minnSD = self.techparams["nSDB_a"]

        grid_res = self.grid 
        def_grid_res = 0.005  # Default value for grid resolution
        if grid_res == 0.0:
            grid_res = def_grid_res  # Default value for grid resolution


# pwell case

        if self.well == "sub":
            psdRect1 = Rect(psdlayer, Box(0, 0, self.l, self.w))
            psdRect2 = Rect(
                psdlayer, Box(minpSD, minpSD, self.l - minpSD, self.w - minpSD)
            )

            actRect1 = Rect(
                activlayer,
                Box(psdActiv, psdActiv, self.l - psdActiv, self.w - psdActiv),
            )
            actRect2 = Rect(
                activlayer,
                Box(
                    minpSD - psdActiv,
                    minpSD - psdActiv,
                    self.l - minpSD + psdActiv,
                    self.w - minpSD + psdActiv,
                ),
            )            

            met1Rect1 = Rect(
                metal1_layer,
                Box(
                    minpSD / 2 - contbar_min_width / 2 - endcap,
                    minpSD / 2 - contbar_min_width / 2 - endcap,
                    self.l - minpSD / 2 + contbar_min_width / 2 + endcap,
                    self.w - minpSD / 2 + contbar_min_width / 2 + endcap,
                ),
            )
            met1Rect2 = Rect(
                metal1_layer,
                Box(
                    minpSD / 2 + contbar_min_width / 2 + endcap,
                    minpSD / 2 + contbar_min_width / 2 + endcap,
                    self.l - minpSD / 2 - contbar_min_width / 2 - endcap,
                    self.w - minpSD / 2 - contbar_min_width / 2 - endcap,
                ),
            )

            fgXor([psdRect1], [psdRect2], psdlayer)
            fgXor([actRect1], [actRect2], activlayer)
            fgXor([met1Rect1], [met1Rect2], metal1_layer)


            # Constants for the square dimensions and spacing
            OFFSET = cont_diff_over + minpSD_enc
    
            # Calculate the center coordinates of the metal perimeter
            center_x = minpSD / 2 - contbar_min_width / 2
            center_y = minpSD / 2 - contbar_min_width / 2


            # Calculate vertical and horizontal dimensions
            metal_vertical_length = self.w - minpSD + contbar_min_width + 2 * endcap
            bl_to_tl = self.w - 0.155 * 2
            tl_to_tr = self.l - 0.155 * 2


            # Generate y-positions for vertical and horizontal placement
            y_positions_vert, y_spacing_vert = calculate_points_on_line(bl_to_tl, cont_dist, cont_size)
            x_positions_horiz, x_spacing_horiz = calculate_points_on_line(tl_to_tr, cont_dist, cont_size)

            # Apply offset adjustments
            y_positions_vert = adjust_positions(y_positions_vert, OFFSET)
            x_positions_horiz = adjust_positions(x_positions_horiz, OFFSET)

            # Create vertical squares along left and right
            calculate_and_create_squares(
                locintlayer,
                [center_x, self.l - 0.235],  # Left and right x-coordinates
                y_positions_vert,
                cont_size,
                grid_res
            )

            # Create horizontal squares along top and bottom
            calculate_and_create_squares(
                locintlayer,
                x_positions_horiz,
                [center_y, self.w - 0.235],  # Bottom and top y-coordinates
                cont_size,
                grid_res
            )



            # Ensure cleanup of objects if necessary
            psdRect1.destroy()
            psdRect2.destroy()
            actRect1.destroy()
            actRect2.destroy()
            met1Rect1.destroy()
            met1Rect2.destroy()


######## nwell case

        if self.well == "nwell":

            actRect1 = Rect(
                activlayer,
                Box(nsdActiv, nsdActiv, self.l - nsdActiv, self.w - nsdActiv),
            )
            actRect2 = Rect(
                activlayer,
                Box(
                    minnSD - nsdActiv,
                    minnSD - nsdActiv,
                    self.l - minnSD + nsdActiv,
                    self.w - minnSD + nsdActiv,
                ),
            )

            met1Rect1 = Rect(
                metal1_layer,
                Box(
                    minnSD / 2 - contbar_min_width / 2 - endcap,
                    minnSD / 2 - contbar_min_width / 2 - endcap,
                    self.l - minnSD / 2 + contbar_min_width / 2 + endcap,
                    self.w - minnSD / 2 + contbar_min_width / 2 + endcap,
                ),
            )
            met1Rect2 = Rect(
                metal1_layer,
                Box(
                    minnSD / 2 + contbar_min_width / 2 + endcap,
                    minnSD / 2 + contbar_min_width / 2 + endcap,
                    self.l - minnSD / 2 - contbar_min_width / 2 - endcap,
                    self.w - minnSD / 2 - contbar_min_width / 2 - endcap,
                ),
            )
            nwellRect = Rect(
                nwelllayer,
                Box(0, 0, self.l, self.w),
            )

            fgXor([actRect1], [actRect2], activlayer)
            fgXor([met1Rect1], [met1Rect2], metal1_layer)



            center_x = minpSD / 2 - contbar_min_width / 2
            center_y = minpSD / 2 - contbar_min_width / 2

            metal_vertical_length = self.w - minpSD + contbar_min_width + 2 * endcap
            bl_to_tl = self.w - 0.155 * 2
            tl_to_tr = self.l - 0.155 * 2

            # Generate y-positions for vertical and horizontal placement
            y_positions_vert, y_spacing_vert = calculate_points_on_line(bl_to_tl, cont_dist, cont_size)
            x_positions_horiz, x_spacing_horiz = calculate_points_on_line(tl_to_tr, cont_dist, cont_size)

            # Apply offset adjustments
            y_positions_vert = adjust_positions(y_positions_vert, OFFSET)
            x_positions_horiz = adjust_positions(x_positions_horiz, OFFSET)

            # Create vertical squares along left and right
            calculate_and_create_squares(
                locintlayer,
                [center_x, self.l - 0.235],  # Left and right x-coordinates
                y_positions_vert,
                cont_size,
                grid_res
            )

            # Create horizontal squares along top and bottom
            calculate_and_create_squares(
                locintlayer,
                x_positions_horiz,
                [center_y, self.w - 0.235],  # Bottom and top y-coordinates
                cont_size,
                grid_res
            )

            actRect1.destroy()
            actRect2.destroy()
            met1Rect1.destroy()
            met1Rect2.destroy()

