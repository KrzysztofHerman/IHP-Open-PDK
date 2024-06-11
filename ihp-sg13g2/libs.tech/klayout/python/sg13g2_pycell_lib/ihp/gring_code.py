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


class gring(DloGen):

    @classmethod
    def defineParamSpecs(cls, specs):
        # define parameters and default values
        techparams = specs.tech.getTechParams()

        SG13_TECHNOLOGY = techparams["techName"]
        suffix = ""
        if "SG13G2" in SG13_TECHNOLOGY:
            suffix = "G2"
        if "SG13G3" in SG13_TECHNOLOGY:
            suffix = "G3"

        CDFVersion = techparams["CDFVersion"]
        model = techparams["gring_model"]
        defL = techparams["gring_defL"]
        defW = techparams["gring_defW"]

        specs("cdf_version", CDFVersion, "CDF Version")
        specs("Display", "Selected", "Display", ChoiceConstraint(["All", "Selected"]))
        specs("model", model, "Model name")

        specs("w", defW, "Width")
        specs("l", defL, "Length")

    def setupParams(self, params):
        self.grid = self.tech.getGridResolution()
        self.techparams = self.tech.getTechParams()

        self.w = Numeric(params["w"]) * 1e6
        self.l = Numeric(params["l"]) * 1e6
        # self.resistance = Numeric(params['R'])

    def genLayout(self):
        psdlayer = Layer("pSD")
        activlayer = Layer("Activ")
        textlayer = Layer("TEXT")
        met1layer = Layer("Metal1")
        locintlayer = Layer("Cont")

        Cell = self.__class__.__name__

        grid = self.techparams["grid"]
        endcap = self.techparams["M1_c1"]
        consize = self.techparams["Cnt_a"]
        conspace = self.techparams["Cnt_b"]
        psdActiv = self.techparams["pSD_c1"]
        contbar_min_len = self.techparams["CntB_a1"]
        contbar_min_width = self.techparams["CntB_a"]
        contbar_act_enc = self.techparams["CntB_c"]
        minpSD = self.techparams["pSD_a"]

        psdRect1 = Rect(psdlayer, Box(0, 0, self.l, self.w))
        psdRect2 = Rect(psdlayer, Box(minpSD, minpSD, self.l - minpSD, self.w - minpSD))

        actRect1 = Rect(
            activlayer, Box(psdActiv, psdActiv, self.l - psdActiv, self.w - psdActiv)
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

        lociRect1 = Rect(
            locintlayer,
            Box(
                minpSD / 2 - contbar_min_width / 2,
                minpSD / 2 - contbar_min_width / 2,
                self.l - minpSD / 2 + contbar_min_width / 2,
                self.w - minpSD / 2 + contbar_min_width / 2,
            ),
        )
        lociRect2 = Rect(
            locintlayer,
            Box(
                minpSD / 2 + contbar_min_width / 2,
                minpSD / 2 + contbar_min_width / 2,
                self.l - minpSD / 2 - contbar_min_width / 2,
                self.w - minpSD / 2 - contbar_min_width / 2,
            ),
        )

        met1Rect1 = Rect(
            met1layer,
            Box(
                minpSD / 2 - contbar_min_width / 2 - endcap,
                minpSD / 2 - contbar_min_width / 2 - endcap,
                self.l - minpSD / 2 + contbar_min_width / 2 + endcap,
                self.w - minpSD / 2 + contbar_min_width / 2 + endcap,
            ),
        )
        met1Rect2 = Rect(
            met1layer,
            Box(
                minpSD / 2 + contbar_min_width / 2 + endcap,
                minpSD / 2 + contbar_min_width / 2 + endcap,
                self.l - minpSD / 2 - contbar_min_width / 2 - endcap,
                self.w - minpSD / 2 - contbar_min_width / 2 - endcap,
            ),
        )

        fgXor([psdRect1], [psdRect2], psdlayer)
        fgXor([actRect1], [actRect2], activlayer)
        fgXor([lociRect1], [lociRect2], locintlayer)
        fgXor([met1Rect1], [met1Rect2], met1layer)

        psdRect1.destroy()
        psdRect2.destroy()
        actRect1.destroy()
        actRect2.destroy()
        lociRect1.destroy()
        lociRect2.destroy()
        met1Rect1.destroy()
        met1Rect2.destroy()

        # fgOr(x1, x3)

        # dbCreateRect(self,  activlayer, Box(psdActiv, psdActiv, self.l - psdActiv, minpSD - psdActiv))

        # SetSGq(lbl scale height)
