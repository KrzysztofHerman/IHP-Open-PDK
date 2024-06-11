########################################################################
#
# Copyright 2024 IHP PDK Authors
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

import pya
import os
import sys

from cni.dlo import Tech
from cni.dlo import PCellWrapper

# Creates the SG13_dev technology
from .sg13_tech import *

# Defines the IHP PCells
from .ihp import nmos_code
from .ihp import pmos_code
from .ihp import cmim_code
from .ihp import rsil_code
from .ihp import rhigh_code
from .ihp import rppd_code
from .ihp import sealring_code
from .ihp import npn13G2_base_code
from .ihp import npn13G2_code
from .ihp import npn13G2L_code
from .ihp import npn13G2V_code
from .ihp import gring_code
from .ihp import bondpad_code

class PyCellLib(pya.Library):
    def __init__(self):
        self.description = "SG13_dev"

        tech = Tech.get('SG13_dev')

        # TODO: instead of explicitly creating the PCells here we could
        # use introspection to collect the classes defined
        self.layout().register_pcell("nmos", PCellWrapper(nmos_code.nmos(), tech))
        self.layout().register_pcell("pmos", PCellWrapper(pmos_code.pmos(), tech))
        self.layout().register_pcell("cmim", PCellWrapper(cmim_code.cmim(), tech))
        self.layout().register_pcell("rsil", PCellWrapper(rsil_code.rsil(), tech))
        self.layout().register_pcell("rhigh", PCellWrapper(rhigh_code.rhigh(), tech))
        self.layout().register_pcell("rppd", PCellWrapper(rppd_code.rppd(), tech))
        self.layout().register_pcell("sealring", PCellWrapper(sealring_code.sealring(), tech))
        self.layout().register_pcell("npn13G2_base", PCellWrapper(npn13G2_base_code.npn13G2_base(), tech))
        self.layout().register_pcell("npn13G2", PCellWrapper(npn13G2_code.npn13G2(), tech))
        self.layout().register_pcell("npn13G2L", PCellWrapper(npn13G2L_code.npn13G2L(), tech))
        self.layout().register_pcell("npn13G2V", PCellWrapper(npn13G2V_code.npn13G2V(), tech))
        self.layout().register_pcell("gring", PCellWrapper(gring_code.gring(), tech))
        self.layout().register_pcell("bondpad", PCellWrapper(bondpad_code.bondpad(), tech))

        self.register("SG13_dev")

# instantiate and register the library
PyCellLib()

