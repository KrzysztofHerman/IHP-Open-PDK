
########################################################################
#
# Copyright 2025 IHP PDK Authors
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

__version__ = '$Revision: #3 $'

from cni.dlo import *
from .thermal import *
from .geometry import *
from .utility_functions import *

import math

class nmos(DloGen):

    @classmethod
    def defineParamSpecs(cls, specs):
        techparams = specs.tech.getTechParams()

        CDFVersion = techparams['CDFVersion']
        model      = 'sg13_lv_nmos'
        defL       = techparams['nmos_defL']
        defW       = techparams['nmos_defW']
        defNG      = techparams['nmos_defNG']
        minL       = techparams['nmos_minL']
        minW       = techparams['nmos_minW']

        specs('cdf_version', CDFVersion, 'CDF Version')
        specs('Display', 'Selected', 'Display', ChoiceConstraint(['All', 'Selected']))
        specs('model', model, 'Model name')

        specs('w' ,   defW, 'Width')
        specs('ws',   eng_string(Numeric(defW)/Numeric(defNG)), 'SingleWidth')
        specs('l' ,   defL, 'Length')
        specs('Wmin', minW, 'Wmin')
        specs('Lmin', minL, 'Lmin')
        specs('ng',   defNG, 'Number of Gates')

        specs('m', '1', 'Multiplier')
        specs('trise', '', 'Temp rise from ambient')

    def setupParams(self, params):
        # process parameter values entered by user
        self.w  = Numeric(params['w'])*1e6
        self.l  = Numeric(params['l'])*1e6
        self.ng = int(params['ng'])

    def genLayout(self):
        w  = self.w
        ng = self.ng
        l  = self.l

        techparams      = self.tech.getTechParams()
        self.techparams = techparams
        self.epsilon    = techparams['epsilon1']

        Cell = self.__class__.__name__

        #*************************************************************************
        #*
        #* Cell Properties
        #*
        #************************************************************************
        dbReplaceProp(self, 'ivCellType', 'graphic')
        dbReplaceProp(self, 'viewSubType', 'maskLayoutParamCell')
        dbReplaceProp(self, 'instNamePrefix', 'M')
        dbReplaceProp(self, 'function', 'transistor')
        dbReplaceProp(self, 'pcellVersion', '$Revision: 1.0 $')
        dbReplaceProp(self, 'pin#', 5)

        #*************************************************************************
        #*
        #* Layer Definitions
        #*
        #************************************************************************

        metall_layer = Layer('Metal1')
        metall_layer_pin = Layer('Metal1', 'pin')
        ndiff_layer = Layer('Activ')
        poly_layer = Layer('GatPoly')
        poly_layer_pin = Layer('GatPoly', 'pin')
        locint_layer = Layer('Cont')
        text_layer = Layer('TEXT', 'drawing')

        #*************************************************************************
        #*
        #* Generic Design Rule Definitions
        #*
        #************************************************************************
        epsilon = techparams['epsilon1']
        endcap = techparams['M1_c1']
        cont_size = techparams['Cnt_a']
        cont_dist = techparams['Cnt_b']
        cont_Activ_overRec = techparams['Cnt_c']
        cont_metall_over = techparams['M1_c']
        gatpoly_Activ_over = techparams['Gat_c']
        gatpoly_cont_dist = techparams['Cnt_f']
        smallw_gatpoly_cont_dist = cont_Activ_overRec+techparams['Gat_d']
        contActMin = 2*cont_Activ_overRec+cont_size

        dbReplaceProp(self, 'pin#', 5)

        ng = fix(ng+epsilon)

        w = w/ng
        w = GridFix(w)
        l = GridFix(l)

        #*************************************************************************
        #*
        #* Main body of code
        #*
        #************************************************************************

        if endcap < cont_metall_over :
            endcap = cont_metall_over
        if w < contActMin-epsilon :   #  adjust size of Gate to S/D contact region due to corner
            gatpoly_cont_dist = smallw_gatpoly_cont_dist

        xdiff_beg = 0
        ydiff_beg = 0
        ydiff_end = w

        xanz = fix((w-2*cont_Activ_overRec+cont_dist)/(cont_size+cont_dist)+epsilon)
        w1 = xanz*(cont_size+cont_dist)-cont_dist+cont_Activ_overRec+cont_Activ_overRec
        xoffset = (w-w1)/2
        xoffset = GridFix(xoffset)
        diffoffset = 0
        if w < contActMin :
            xoffset = 0
            diffoffset = (contActMin-w)/2
            diffoffset = Snap(diffoffset)

        # get the number of contacts
        lcon = w-2*cont_Activ_overRec
        distc = cont_size+cont_dist
        ncont = fix((w-2*cont_Activ_overRec+cont_dist)/(cont_size+cont_dist)+epsilon)
        if zerop(ncont) :
            ncont = 1

        diff_cont_offset = GridFix((w-2*cont_Activ_overRec-ncont*cont_size-(ncont-1)*cont_dist)/2)

        # draw the cont row
        xcont_beg = xdiff_beg+cont_Activ_overRec
        ycont_beg = ydiff_beg+cont_Activ_overRec
        ycont_cnt = ycont_beg+diffoffset+diff_cont_offset
        xcont_end = xcont_beg+cont_size

        # draw Metal rect
        # calculate bot and top cont position
        yMet1 = ycont_cnt-endcap
        yMet2 = ycont_cnt+cont_size+(ncont-1)*distc+endcap
        # is metal1 overlapping Activ?
        yMet1 = min(yMet1, ydiff_beg+diffoffset)
        yMet2 = max(yMet2, ydiff_end+diffoffset)
        dbCreateRect(self, metall_layer, Box(xcont_beg-cont_metall_over, yMet1, xcont_end+cont_metall_over, yMet2))

        # draw contacts and Metall
        contactArray(self, 0, locint_layer, xcont_beg, ydiff_beg, xcont_end, ydiff_end+diffoffset*2, 0, cont_Activ_overRec, cont_size, cont_dist)

        MkPin(self, 'S', 3, Box(xcont_beg-cont_metall_over, yMet1, xcont_end+cont_metall_over, yMet2), metall_layer_pin)

        # draw source diffusion
        dbCreateRect(self, ndiff_layer, Box(xcont_beg-cont_Activ_overRec, ycont_beg-cont_Activ_overRec,
                                            xcont_end+cont_Activ_overRec, ycont_beg+cont_size+cont_Activ_overRec))

        for i in range(1, ng+1) :
            # draw the poly line
            xpoly_beg = xcont_end+gatpoly_cont_dist
            ypoly_beg = ydiff_beg-gatpoly_Activ_over
            xpoly_end = xpoly_beg+l
            ypoly_end = ydiff_end+gatpoly_Activ_over
            dbCreateRect(self, poly_layer, Box(xpoly_beg, ypoly_beg+diffoffset, xpoly_end, ypoly_end+diffoffset))

            ihpAddThermalMosLayer(self, Box(xpoly_beg, ypoly_beg+diffoffset, xpoly_end, ypoly_end+diffoffset), True, Cell)

            if i == 1 :
                dbCreateLabel(self, text_layer, Point((xpoly_beg+xpoly_end)/2, (ypoly_beg+ypoly_end)/2+diffoffset), 'nmos', 'centerCenter', 'R90', Font.EURO_STYLE, 0.1)

            if onep(i) :
                MkPin(self, 'G', 2, Box(xpoly_beg, ypoly_beg+diffoffset, xpoly_end, ypoly_end+diffoffset), poly_layer_pin)

            # draw the second cont row
            xcont_beg = xpoly_end+gatpoly_cont_dist
            ycont_beg = ydiff_beg+cont_Activ_overRec
            ycont_cnt = ycont_beg+diffoffset+diff_cont_offset
            xcont_end = xcont_beg+cont_size
            dbCreateRect(self, metall_layer, Box(xcont_beg-cont_metall_over, yMet1, xcont_end+cont_metall_over, yMet2))

            contactArray(self, 0, locint_layer, xcont_beg, ydiff_beg, xcont_end, ydiff_end+diffoffset*2, 0, cont_Activ_overRec, cont_size, cont_dist)

            if onep(i) :
                MkPin(self, 'D', 1, Box(xcont_beg-cont_metall_over, yMet1, xcont_end+cont_metall_over, yMet2), metall_layer_pin)

            # draw drain diffusion
            dbCreateRect(self, ndiff_layer, Box(xcont_beg-cont_Activ_overRec, ycont_beg-cont_Activ_overRec,
                                                xcont_end+cont_Activ_overRec, ycont_beg+cont_size+cont_Activ_overRec))

        # now finish drawing the diffusion
        xdiff_end = xcont_end+cont_Activ_overRec
        dbCreateRect(self, ndiff_layer, Box(xdiff_beg, ydiff_beg+diffoffset, xdiff_end, ydiff_end+diffoffset))

__version__ = '$Revision: #3 $'

from cni.dlo import *
from .geometry import *
from .thermal import *
from .utility_functions import *


import math

class isolbox(DloGen):

    @classmethod
    def defineParamSpecs(self, specs):   
        techparams = specs.tech.getTechParams()
        
        CDFVersion = techparams['CDFVersion']
        
        minL       = techparams['isolbox_defLW']
        minW       = techparams['isolbox_defLW']
        defA       = '12.96p'
        defP       = '14.4u'
        
        specs('cdf_version', CDFVersion, 'CDF Version')
        specs('Display', 'Selected', 'Display', ChoiceConstraint(['All', 'Selected']))
        specs('model', 'isolbox', 'Model name')
             
        specs('l', minL, 'Length')
        specs('w', minW, 'Width')
        specs('wellwidth', '1.05u', 'Well width', ChoiceConstraint(['1.05u', '1.5u']))
        specs('diode_layer', 't', 'Add the DIODE layer', ChoiceConstraint(['t', 'nil']))
        specs('cont_ring', 'nil', 'Add the ring of contacts', ChoiceConstraint(['O', 'U', 'nil']))
        specs('calculate', 'Bv', 'Calculate', ChoiceConstraint(['Bv', 'PWell width']))
        
        specs('pwell_w', '0', 'PWellBlock width')
        specs('Bv', '10.8', 'Break voltage')
        specs('a', defA, 'Area')
        specs('p', defP, 'Perimeter')
        specs('aw', defA, 'Inner Area')
        specs('pw', defP, 'Inner Perimeter')
        specs('Wmin', minW, 'Wmin')
        specs('Lmin', minL, 'Lmin')
        specs('bn', '[@sub:%:sub!]', 'Bulk node connection')

    def setupParams(self, params):
        # process parameter values entered by user
        self.params = params
        self.l = params['l']
        self.w = params['w']
        self.wellwidth = params['wellwidth']
        self.diode_layer = params['diode_layer']
        self.pwell_w = params['pwell_w']
        self.cont_ring = params['cont_ring']

    def genLayout(self):
        l = self.l
        w = self.w
        wellwidth = self.wellwidth
        diode_layer = self.diode_layer
        pwell_w = self.pwell_w
        cont_ring = self.cont_ring

        l = Numeric(l)*1e6
        w = Numeric(w)*1e6
        nw_a = Numeric(wellwidth)*1e6
        pw_width = Numeric(pwell_w)*1e6
        
        dwell = Layer('nBuLay', 'drawing')
        well = Layer('NWell', 'drawing')
        activ = Layer('Activ', 'drawing')
        diode = Layer('Recog', 'diode')
        metal1 = Layer('Metal1', 'drawing')
        contact = Layer('Cont', 'drawing')
        pwbl = Layer('PWell', 'block')
        contW = 0.16
        contS = 0.18
        nbl_nw = 0.62
        nwOact = 0.24
        if wellwidth == '0.85u':
            nwOact2 = 0.32
        else :
            nwOact2 = nwOact
                
        if  wellwidth == '1.05u' :
            dd = 0.4
        else :
            dd = nw_a-nbl_nw
                        
        dbCreateRect(self, dwell, Box(-nw_a+dd, -nw_a+dd, (l-nw_a-dd), (w-nw_a-dd)))
        
        dbCreatePolygon(self, well, PointList([Point(0, 0), Point(l-2*nw_a, 0), Point(l-2*nw_a, w-2*nw_a), Point(0, w-2*nw_a),
                                               Point(0, 0), Point(-nw_a, 0), Point(-nw_a, w-nw_a), Point(l-nw_a, w-nw_a),
                                               Point(l-nw_a, -nw_a), Point(-nw_a, -nw_a), Point(-nw_a, 0)]))
        
        if diode_layer :
            dbCreatePolygon(self, diode, PointList([Point(0, 0), Point(l-2*nw_a, 0), 
                                                    Point(l-2*nw_a, w-2*nw_a), Point(0, w-2*nw_a), 
                                                    Point(0, 0), Point(-nw_a, 0), 
                                                    Point(-nw_a, w-nw_a), Point(l-nw_a, w-nw_a), 
                                                    Point(l-nw_a, -nw_a), Point(-nw_a, -nw_a), 
                                                    Point(-nw_a, 0)]))
            
        if pw_width >  0 :
            dbCreatePolygon(self, pwbl, PointList([Point(-nw_a-pw_width, -nw_a), Point(l-nw_a, -nw_a), 
                                                   Point(l-nw_a, w-nw_a), Point(-nw_a, w-nw_a), 
                                                   Point(-nw_a, -nw_a), Point(-nw_a-pw_width, -nw_a), 
                                                   Point(-nw_a-pw_width, w-nw_a+pw_width), Point(l-nw_a+pw_width, w-nw_a+pw_width), 
                                                   Point(l-nw_a+pw_width, -nw_a-pw_width), Point(-nw_a-pw_width, -nw_a-pw_width)]))
            
        dbCreatePolygon(self, activ, PointList([Point(-(nw_a-nwOact2), -(nw_a-nwOact2)), Point(l-nw_a-nwOact2, -(nw_a-nwOact2)), 
                                                Point(l-nw_a-nwOact2, w-nw_a-nwOact2), Point(-(nw_a-nwOact2), w-nw_a-nwOact2), 
                                                Point(-(nw_a-nwOact2), -nwOact), Point(-nwOact, -nwOact), 
                                                Point(-nwOact, w-2*nw_a+nwOact), Point(l-2*nw_a+nwOact, w-2*nw_a+nwOact), 
                                                Point(l-2*nw_a+nwOact, -nwOact), Point(-(nw_a-nwOact2), -nwOact)]))
                                                
        MkPin(self, 'I', 2, Box(-(nw_a-nwOact2), -(nw_a-nwOact2), -nwOact, w-nw_a-nwOact2), Layer('Activ', 'pin'))
        labelpos = Point(0, -nw_a/2)
        dbCreateLabel(self, Layer('TEXT', 'drawing'), labelpos, 'isolbox', 'centerCenter', 'R0', Font.EURO_STYLE, nw_a/4)
        
        if cont_ring != 'nil':
            venc = 0.06
            xm = nw_a/2+0.015
            wm = contW+venc*2
            off = 0.06
            if wellwidth == '0.85u' :
                xm = xm-0.05
                wm = wm-0.02
                off = 0.05
                
            if cont_ring == 'O' :
                MetalCont(self, -xm+wm/2, w-nw_a*2+xm, l-nw_a*2+xm-wm/2, w-nw_a*2+xm, metal1, contact, wm, contW, contW, contS-off, contS)
                
            MetalCont(self, -xm+wm/2, -xm, l-nw_a*2+xm-wm/2, -xm, metal1, contact, wm, contW, contW, contS-off, contS)
            MetalCont(self, -xm, -xm-wm/2, -xm, w-nw_a*2+xm+wm/2, metal1, contact, wm, contW, contW, off, contS)
            MetalCont(self, l-nw_a*2+xm, -xm-wm/2, l-nw_a*2+xm, w-nw_a*2+xm+wm/2, metal1, contact, wm, contW, contW, off, contS)
