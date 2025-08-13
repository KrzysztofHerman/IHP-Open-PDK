// Converted from IHP SG13G2 PDK for Ngspice

//************************************************************************
//*
//* Copyright 2023 IHP PDK Authors
//* 
//* Licensed under the Apache License, Version 2.0 (the "License");
//* you may not use this file except in compliance with the License.
//* You may obtain a copy of the License at
//* 
//*    https://www.apache.org/licenses/LICENSE-2.0
//* 
//* Unless required by applicable law or agreed to in writing, software
//* distributed under the License is distributed on an "AS IS" BASIS,
//* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//* See the License for the specific language governing permissions and
//* limitations under the License.
//*
//************************************************************************

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_a21o_1
//* View name: schematic
subckt sg13g2_a21o_1(x a1 a2 b1 vdd vss)
xn0 (net1 a1 net2 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn1 (net2 a2 vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn2 (net1 b1 vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn3 (x net1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xp0 (net1 b1 net3 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp1 (net3 a1 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp2 (net3 a2 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp3 (x net1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_a21o_2
//* View name: schematic
subckt sg13g2_a21o_2(x a1 a2 b1 vdd vss)
xn0 (net1 a1 net2 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn1 (net2 a2 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (net1 b1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn3 (x net1 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xp0 (net1 b1 net3 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp1 (net3 a1 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp2 (net3 a2 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp3 (x net1 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_a21oi_1
//* View name: schematic
subckt sg13g2_a21oi_1(y a1 a2 b1 vdd vss)
xmnb0 (y b1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xmna1 (snda1 a2 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xmna0 (y a1 snda1 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xmpb0 (y b1 pnda vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xmpa1 (pnda a2 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xmpa0 (pnda a1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_a21oi_2
//* View name: schematic
subckt sg13g2_a21oi_2(y a1 a2 b1 vdd vss)
xmnb0 (y b1 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xmna1 (snda1 a2 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xmna0 (y a1 snda1 vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xmpb0 (y b1 pnda vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xmpa1 (pnda a2 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xmpa0 (pnda a1 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_a221oi_1
//* View name: schematic
subckt sg13g2_a221oi_1(y a1 a2 b1 b2 c1 vdd vss)
xmpc0 (y c1 pndb vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xmpb1 (pndb b2 pnda vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xmpb0 (pndb b1 pnda vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xmpa1 (pnda a2 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xmpa0 (pnda a1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xmnc0 (y c1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xmnb1 (sndb1 b2 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xmnb0 (y b1 sndb1 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xmna1 (snda1 a2 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xmna0 (y a1 snda1 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_and2_1
//* View name: schematic
subckt sg13g2_and2_1(x a b vdd vss)
xx0 (net4 a net2 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx2 (x net4 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx3 (net2 b vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx1 (net4 b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx4 (x net4 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx5 (net4 a vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_and2_2
//* View name: schematic
subckt sg13g2_and2_2(x a b vdd vss)
xx0 (net4 a net2 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx2 (x net4 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xx3 (net2 b vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx1 (net4 b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx4 (x net4 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx5 (net4 a vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_and3_1
//* View name: schematic
subckt sg13g2_and3_1(x a b c vdd vss)
xx0 (net3 c vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx2 (x net2 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx5 (net2 a net1 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx6 (net1 b net3 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx3 (x net2 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx1 (net2 b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx4 (net2 a vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx7 (net2 c vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_and3_2
//* View name: schematic
subckt sg13g2_and3_2(x a b c vdd vss)
xx0 (net3 c vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx2 (x net2 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xx5 (net2 a net1 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx6 (net1 b net3 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx3 (x net2 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx1 (net2 b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx4 (net2 a vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx7 (net2 c vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_and4_1
//* View name: schematic
subckt sg13g2_and4_1(x a b c d vdd vss)
xn4 (net17 d vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn3 (net16 c net17 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn2 (net15 b net16 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn1 (net1 a net15 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn0 (x net1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xp0 (net1 a vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp4 (x net1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp3 (net1 d vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp2 (net1 c vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp1 (net1 b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_and4_2
//* View name: schematic
subckt sg13g2_and4_2(x a b c d vdd vss)
xn4 (net17 d vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn3 (net16 c net17 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn2 (net15 b net16 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn1 (net1 a net15 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn0 (x net1 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xp0 (net1 a vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp4 (x net1 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp3 (net1 d vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp2 (net1 c vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp1 (net1 b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_antennanp
//* View name: schematic
subckt sg13g2_antennanp(a vdd vss)
xdn_1 (vss a) dantenna  l=780n w=780n m=1
xd0 (a vdd) dpantenna  l=1.34u w=1.05u m=1
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_buf_1
//* View name: schematic
subckt sg13g2_buf_1(x a vdd vss)
xn1 (net1 a vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn0 (x net1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xp1 (x net1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp0 (net1 a vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_buf_16
//* View name: schematic
subckt sg13g2_buf_16(x a vdd vss)
xn1 (net1 a vss vss) sg13_lv_nmos (
  w=4.44u l=130.00n ng=6 ad=8.436e-13 as=1.066e-12 pd=6.72e-06 ps=8.8e-06 m=1
)
xn0 (x net1 vss vss) sg13_lv_nmos (
  w=11.84u l=130.00n ng=16 ad=2.25e-12 as=2.472e-12 pd=1.792e-05 ps=2e-05 m=1
)
xp1 (x net1 vdd vdd) sg13_lv_pmos (
  w=17.92u l=130.00n ng=16 ad=3.405e-12 as=3.741e-12 pd=2.4e-05 ps=2.684e-05 m=1
)
xp0 (net1 a vdd vdd) sg13_lv_pmos (
  w=6.72u l=130.00n ng=6 ad=1.277e-12 as=1.613e-12 pd=9e-06 ps=1.184e-05 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_buf_2
//* View name: schematic
subckt sg13g2_buf_2(x a vdd vss)
xn1 (net1 a vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn0 (x net1 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xp1 (x net1 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp0 (net1 a vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_buf_4
//* View name: schematic
subckt sg13g2_buf_4(x a vdd vss)
xn1 (net1 a vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn0 (x net1 vss vss) sg13_lv_nmos (
  w=2.96u l=130.00n ng=4 ad=5.624e-13 as=7.844e-13 pd=4.48e-06 ps=6.56e-06 m=1
)
xp1 (x net1 vdd vdd) sg13_lv_pmos (
  w=4.48u l=130.00n ng=4 ad=8.512e-13 as=1.187e-12 pd=6e-06 ps=8.84e-06 m=1
)
xp0 (net1 a vdd vdd) sg13_lv_pmos (
  w=1.68u l=130.00n ng=2 ad=3.192e-13 as=5.712e-13 pd=2.44e-06 ps=4.72e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_buf_8
//* View name: schematic
subckt sg13g2_buf_8(x a vdd vss)
xn1 (net1 a vss vss) sg13_lv_nmos (
  w=2.22u l=130.00n ng=3 ad=5.328e-13 as=5.328e-13 pd=4.4e-06 ps=4.4e-06 m=1
)
xn0 (x net1 vss vss) sg13_lv_nmos (
  w=5.92u l=130.00n ng=8 ad=1.125e-12 as=1.347e-12 pd=8.96e-06 ps=1.104e-05 m=1
)
xp1 (x net1 vdd vdd) sg13_lv_pmos (
  w=8.96u l=130.00n ng=8 ad=1.702e-12 as=2.038e-12 pd=1.2e-05 ps=1.484e-05 m=1
)
xp0 (net1 a vdd vdd) sg13_lv_pmos (
  w=3.36u l=130.00n ng=3 ad=8.064e-13 as=8.064e-13 pd=5.92e-06 ps=5.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_decap_4
//* View name: schematic
subckt sg13g2_decap_4(vdd vss)
xx1 (vss vdd vss vss) sg13_lv_nmos (
  w=420.00n l=1.000u ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx0 (vdd vss vdd vdd) sg13_lv_pmos (
  w=1.000u l=1.000u ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_decap_8
//* View name: schematic
subckt sg13g2_decap_8(vdd vss)
xx1 (vss vdd vss vss) sg13_lv_nmos (
  w=840.00n l=1.000u ng=2 ad=1.596e-13 as=2.856e-13 pd=1.6e-06 ps=3.04e-06 m=1
)
xx0 (vdd vss vdd vdd) sg13_lv_pmos (
  w=2.000u l=1.000u ng=2 ad=3.8e-13 as=6.8e-13 pd=2.76e-06 ps=5.36e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_dfrbp_1
//* View name: schematic
subckt sg13g2_dfrbp_1(q q_n clk d reset_b vdd vss)
xn13 (net12 net2 vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn14 (net5 clkneg net12 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn15 (net2 net5 net11 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn16 (net11 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn6 (q_n net5 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn0 (db d net10 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn1 (net10 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn7 (db clkneg net6 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn8 (net6 clkpos net9 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn9 (net9 net4 net8 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn10 (net8 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn11 (net4 net6 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (clkneg clk vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn12 (net4 clkpos net5 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn3 (clkpos clkneg vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn4 (q net1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn5 (net1 net5 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xp14 (net5 clkpos net3 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp15 (net2 net5 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp16 (net2 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp6 (q_n net5 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp7 (db clkpos net6 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp0 (db reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp1 (db d vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp8 (net7 net4 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp9 (net6 clkneg net7 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp10 (net6 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp2 (clkneg clk vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp3 (clkpos clkneg vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp11 (net4 net6 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp12 (net4 clkneg net5 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp4 (q net1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp13 (net3 net2 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp5 (net1 net5 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_dfrbp_2
//* View name: schematic
subckt sg13g2_dfrbp_2(q q_n clk d reset_b vdd vss)
xn13 (net12 net2 vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn14 (net5 clkneg net12 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn15 (net2 net5 net11 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn16 (net11 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn6 (q_n net5 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xn0 (db d net10 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn1 (net10 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn7 (db clkneg net6 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn8 (net6 clkpos net9 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn9 (net9 net4 net8 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn10 (net8 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn11 (net4 net6 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (clkneg clk vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn12 (net4 clkpos net5 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn3 (clkpos clkneg vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn4 (q net1 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xn5 (net1 net5 vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xp14 (net5 clkpos net3 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp15 (net2 net5 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp16 (net2 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp6 (q_n net5 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp7 (db clkpos net6 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp0 (db reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp1 (db d vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp8 (net7 net4 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp9 (net6 clkneg net7 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp10 (net6 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp2 (clkneg clk vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp3 (clkpos clkneg vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp11 (net4 net6 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp12 (net4 clkneg net5 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp4 (q net1 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp13 (net3 net2 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp5 (net1 net5 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_dlhq_1
//* View name: schematic
subckt sg13g2_dlhq_1(q d gate vdd vss)
xx17 (q qint_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx16 (qint gate_bb net8 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx14 (qint_b qint vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx12 (db d vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx9 (gate_b gate vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx7 (gate_bb gate_b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx4 (net8 qint_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx3 (net4 gate_b qint vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx1 (net4 db vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx15 (gate_b gate vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx13 (gate_bb gate_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx11 (qint gate_b net9 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx10 (q qint_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx8 (net7 db vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx6 (net9 qint_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx5 (qint_b qint vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx2 (qint gate_bb net7 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx0 (db d vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_dlhr_1
//* View name: schematic
subckt sg13g2_dlhr_1(q q_n d gate reset_b vdd vss)
xx0 (qint_b reset_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx9 (q qint_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx15 (qint gate_bb net11 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx6 (net11 qint_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx10 (qint gate_b net2 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx18 (net2 db vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx13 (db d vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx5 (gate_b gate vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx3 (q_n qintn_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx1 (qint_b qint vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx20 (gate_bb gate_b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx2 (qintn_b qint_b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx12 (qint_b qint net9 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx21 (net9 reset_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx11 (qint gate_b net7 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx14 (net7 qint_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx7 (q qint_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx16 (qint gate_bb net1 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx23 (net1 db vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx4 (db d vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx19 (gate_b gate vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx8 (q_n qintn_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx17 (gate_bb gate_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx22 (qintn_b qint_b vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_dlhrq_1
//* View name: schematic
subckt sg13g2_dlhrq_1(q d gate reset_b vdd vss)
xx21 (net116 reset_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx7 (q qint_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx17 (gate_bb gate_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx11 (qint gate_b net89 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx12 (qint_b qint net116 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx4 (db d vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx23 (net61 db vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx16 (qint gate_bb net61 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx14 (net89 qint_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx19 (gate_b gate vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx18 (net60 db vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx0 (qint_b reset_b vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx15 (qint gate_bb net92 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx9 (q qint_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx6 (net92 qint_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx5 (gate_b gate vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx13 (db d vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx10 (qint gate_b net60 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx20 (gate_bb gate_b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx1 (qint_b qint vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_dllr_1
//* View name: schematic
subckt sg13g2_dllr_1(q q_n d gate_n reset_b vdd vss)
xx4 (db d vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx19 (gnb gate_n vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx17 (gnbb gnb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx14 (net89 qint_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx12 (qint_b qint net116 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx21 (net116 reset_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx11 (qint gnbb net89 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx8 (q_n qintn_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx16 (qint gnb net61 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx22 (qintn_b qint_b vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx23 (net61 db vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx7 (q qint_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx20 (gnbb gnb vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx10 (qint gnbb net60 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx2 (qintn_b qint_b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx3 (q_n qintn_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx18 (net60 db vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx6 (net92 qint_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx0 (qint_b reset_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx13 (db d vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx5 (gnb gate_n vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx9 (q qint_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx15 (qint gnb net92 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx1 (qint_b qint vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_dllrq_1
//* View name: schematic
subckt sg13g2_dllrq_1(q d gate_n reset_b vdd vss)
xx11 (qint gnbb net89 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx16 (qint gnb net61 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx21 (net116 reset_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx7 (q qint_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx23 (net61 db vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx14 (net89 qint_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx12 (qint_b qint net116 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx4 (db d vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx19 (gnb gate_n vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx17 (gnbb gnb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx18 (net59 db vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx0 (qint_b reset_b vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx5 (gnb gate_n vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx6 (net92 qint_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx1 (qint_b qint vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx9 (q qint_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx10 (qint gnbb net59 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx13 (db d vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx20 (gnbb gnb vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx15 (qint gnb net92 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_dlygate4sd1_1
//* View name: schematic
subckt sg13g2_dlygate4sd1_1(x a vdd vss)
xp3 (x net3 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp2 (net3 net2 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp1 (net2 net1 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp0 (net1 a vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn3 (x net3 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (net3 net2 vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn1 (net2 net1 vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn0 (net1 a vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_dlygate4sd2_1
//* View name: schematic
subckt sg13g2_dlygate4sd2_1(x a vdd vss)
xp3 (x net3 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp2 (net3 net2 vdd vdd) sg13_lv_pmos (
  w=1.000u l=250.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp1 (net2 net1 vdd vdd) sg13_lv_pmos (
  w=1.000u l=250.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp0 (net1 a vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn3 (x net3 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (net3 net2 vss vss) sg13_lv_nmos (
  w=420.00n l=180.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn1 (net2 net1 vss vss) sg13_lv_nmos (
  w=420.00n l=180.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn0 (net1 a vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_dlygate4sd3_1
//* View name: schematic
subckt sg13g2_dlygate4sd3_1(x a vdd vss)
xp3 (x net3 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp2 (net3 net2 vdd vdd) sg13_lv_pmos (
  w=1.000u l=500.0n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp1 (net2 net1 vdd vdd) sg13_lv_pmos (
  w=1.000u l=500.0n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp0 (net1 a vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn3 (x net3 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (net3 net2 vss vss) sg13_lv_nmos (
  w=420.00n l=500.0n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn1 (net2 net1 vss vss) sg13_lv_nmos (
  w=420.00n l=500.0n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn0 (net1 a vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_ebufn_2
//* View name: schematic
subckt sg13g2_ebufn_2(z a te_b vdd vss)
xn3 (net4 net3 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xn2 (z net1 net4 vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xn1 (net3 te_b vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn0 (net1 a vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xp3 (net2 te_b vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp2 (z net1 net2 vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp1 (net3 te_b vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp0 (net1 a vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_ebufn_4
//* View name: schematic
subckt sg13g2_ebufn_4(z a te_b vdd vss)
xn0 (net23 a vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn1 (net21 te_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (z net23 net22 vss) sg13_lv_nmos (
  w=2.96u l=130.00n ng=4 ad=5.624e-13 as=7.844e-13 pd=4.48e-06 ps=6.56e-06 m=1
)
xn3 (net22 net21 vss vss) sg13_lv_nmos (
  w=2.96u l=130.00n ng=4 ad=5.624e-13 as=7.844e-13 pd=4.48e-06 ps=6.56e-06 m=1
)
xp0 (net23 a vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp1 (net21 te_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp2 (z net23 net24 vdd) sg13_lv_pmos (
  w=4.48u l=130.00n ng=4 ad=8.512e-13 as=1.187e-12 pd=6e-06 ps=8.84e-06 m=1
)
xp3 (net24 te_b vdd vdd) sg13_lv_pmos (
  w=4.48u l=130.00n ng=4 ad=8.512e-13 as=1.187e-12 pd=6e-06 ps=8.84e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_ebufn_8
//* View name: schematic
subckt sg13g2_ebufn_8(z a te_b vdd vss)
xn3 (net23 net22 vss vss) sg13_lv_nmos (
  w=5.92u l=130.00n ng=8 ad=1.125e-12 as=1.347e-12 pd=8.96e-06 ps=1.104e-05 m=1
)
xn2 (z net21 net23 vss) sg13_lv_nmos (
  w=5.92u l=130.00n ng=8 ad=1.125e-12 as=1.347e-12 pd=8.96e-06 ps=1.104e-05 m=1
)
xn1 (net22 te_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn0 (net21 a vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xp3 (net24 te_b vdd vdd) sg13_lv_pmos (
  w=8.96u l=130.00n ng=8 ad=1.702e-12 as=2.038e-12 pd=1.2e-05 ps=1.484e-05 m=1
)
xp2 (z net21 net24 vdd) sg13_lv_pmos (
  w=8.96u l=130.00n ng=8 ad=1.702e-12 as=2.038e-12 pd=1.2e-05 ps=1.484e-05 m=1
)
xp1 (net22 te_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp0 (net21 a vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_einvn_2
//* View name: schematic
subckt sg13g2_einvn_2(z a te_b vdd vss)
xn2 (te te_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn1 (net1 te vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xn0 (z a net1 vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xp2 (te te_b vdd vdd) sg13_lv_pmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xp1 (net2 te_b vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp0 (z a net2 vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_einvn_4
//* View name: schematic
subckt sg13g2_einvn_4(z a te_b vdd vss)
xn1 (net16 te vss vss) sg13_lv_nmos (
  w=2.96u l=130.00n ng=4 ad=5.624e-13 as=7.844e-13 pd=4.48e-06 ps=6.56e-06 m=1
)
xn2 (te te_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn0 (z a net16 vss) sg13_lv_nmos (
  w=2.96u l=130.00n ng=4 ad=5.624e-13 as=7.844e-13 pd=4.48e-06 ps=6.56e-06 m=1
)
xp2 (te te_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp1 (net17 te_b vdd vdd) sg13_lv_pmos (
  w=4.48u l=130.00n ng=4 ad=8.512e-13 as=1.187e-12 pd=6e-06 ps=8.84e-06 m=1
)
xp0 (z a net17 vdd) sg13_lv_pmos (
  w=4.48u l=130.00n ng=4 ad=8.512e-13 as=1.187e-12 pd=6e-06 ps=8.84e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_einvn_8
//* View name: schematic
subckt sg13g2_einvn_8(z a te_b vdd vss)
xn0 (z a net29 vss) sg13_lv_nmos (
  w=5.92u l=130.00n ng=8 ad=1.125e-12 as=1.347e-12 pd=8.96e-06 ps=1.104e-05 m=1
)
xn2 (te te_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn1 (net29 te vss vss) sg13_lv_nmos (
  w=5.92u l=130.00n ng=8 ad=1.125e-12 as=1.347e-12 pd=8.96e-06 ps=1.104e-05 m=1
)
xp1 (net28 te_b vdd vdd) sg13_lv_pmos (
  w=8.96u l=130.00n ng=8 ad=1.702e-12 as=2.038e-12 pd=1.2e-05 ps=1.484e-05 m=1
)
xp0 (z a net28 vdd) sg13_lv_pmos (
  w=8.96u l=130.00n ng=8 ad=1.702e-12 as=2.038e-12 pd=1.2e-05 ps=1.484e-05 m=1
)
xp2 (te te_b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_inv_1
//* View name: schematic
subckt sg13g2_inv_1(y a vdd vss)
xx1 (y a vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx0 (y a vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_inv_16
//* View name: schematic
subckt sg13g2_inv_16(y a vdd vss)
xx1 (y a vss vss) sg13_lv_nmos (
  w=11.84u l=130.00n ng=16 ad=2.25e-12 as=2.472e-12 pd=1.792e-05 ps=2e-05 m=1
)
xx0 (y a vdd vdd) sg13_lv_pmos (
  w=17.92u l=130.00n ng=16 ad=3.405e-12 as=3.741e-12 pd=2.4e-05 ps=2.684e-05 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_inv_2
//* View name: schematic
subckt sg13g2_inv_2(y a vdd vss)
xx1 (y a vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xx0 (y a vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_inv_4
//* View name: schematic
subckt sg13g2_inv_4(y a vdd vss)
xp0 (y a vdd vdd) sg13_lv_pmos (
  w=4.48u l=130.00n ng=4 ad=8.512e-13 as=1.187e-12 pd=6e-06 ps=8.84e-06 m=1
)
xn0 (y a vss vss) sg13_lv_nmos (
  w=2.96u l=130.00n ng=4 ad=5.624e-13 as=7.844e-13 pd=4.48e-06 ps=6.56e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_inv_8
//* View name: schematic
subckt sg13g2_inv_8(y a vdd vss)
xx1 (y a vss vss) sg13_lv_nmos (
  w=5.92u l=130.00n ng=8 ad=1.125e-12 as=1.347e-12 pd=8.96e-06 ps=1.104e-05 m=1
)
xx0 (y a vdd vdd) sg13_lv_pmos (
  w=8.96u l=130.00n ng=8 ad=1.702e-12 as=2.038e-12 pd=1.2e-05 ps=1.484e-05 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_lgcp_1
//* View name: schematic
subckt sg13g2_lgcp_1(gclk clk gate vdd vss)
xx15 (clkbb clkb vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx14 (net1 clkbb net4 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx12 (int_gate net1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx11 (net4 gate vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx9 (net3 int_gate vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx7 (gclk net3 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx5 (net1 clkb net6 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx4 (clkb clk vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx3 (net3 clk vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx2 (net6 int_gate vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx19 (gclk net3 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx18 (net3 int_gate net5 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx17 (int_gate net1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx16 (clkbb clkb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx13 (net7 int_gate vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx10 (net2 gate vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx8 (net1 clkbb net7 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx6 (clkb clk vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx1 (net5 clk vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx0 (net1 clkb net2 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_mux2_1
//* View name: schematic
subckt sg13g2_mux2_1(x a0 a1 s vdd vss)
xp0 (net4 s vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp4 (x net6 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp3 (net6 a1 net5 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp5 (sb s vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp2 (net5 sb vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp1 (net6 a0 net4 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xn4 (net3 s vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn1 (net1 sb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn6 (x net6 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn5 (sb s vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn2 (net6 a1 net3 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn0 (net6 a0 net1 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_mux2_2
//* View name: schematic
subckt sg13g2_mux2_2(x a0 a1 s vdd vss)
xp0 (net4 s vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp4 (x net6 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp3 (net6 a1 net5 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp5 (sb s vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp2 (net5 sb vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp1 (net6 a0 net4 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xn4 (net3 s vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn1 (net1 sb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn6 (x net6 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xn5 (sb s vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn2 (net6 a1 net3 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn0 (net6 a0 net1 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_mux4_1
//* View name: schematic
subckt sg13g2_mux4_1(x a0 a1 a2 a3 s0 s1 vdd vss)
xn12 (x xb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn18 (low s0b net7 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn17 (net7 a0 vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn19 (low s1b xb vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn10 (high s1 xb vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn9 (net4 a3 vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn8 (high s0 net4 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn14 (net6 a2 vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn13 (high s0b net6 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn16 (net2 a1 vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn15 (low s0 net2 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn1 (s1b s1 vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn0 (s0b s0 vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xp19 (low s1 xb vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp11 (high s1b xb vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp10 (x xb vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp9 (high s0b net3 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp8 (net3 a3 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp14 (high s0 net5 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp13 (net5 a2 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp18 (net8 a0 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp17 (low s0 net8 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp1 (s1b s1 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp0 (s0b s0 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp16 (low s0b net1 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp15 (net1 a1 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nand2_1
//* View name: schematic
subckt sg13g2_nand2_1(y a b vdd vss)
xp1 (y b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp0 (y a vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xn1 (net1 b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn0 (y a net1 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nand2_2
//* View name: schematic
subckt sg13g2_nand2_2(y a b vdd vss)
xp1 (y b vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp0 (y a vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xn1 (net1 b vss vss) sg13_lv_nmos (
  w=1.44u l=130.00n ng=2 ad=2.736e-13 as=4.896e-13 pd=2.2e-06 ps=4.24e-06 m=1
)
xn0 (y a net1 vss) sg13_lv_nmos (
  w=1.44u l=130.00n ng=2 ad=2.736e-13 as=4.896e-13 pd=2.2e-06 ps=4.24e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nand2b_1
//* View name: schematic
subckt sg13g2_nand2b_1(y a_n b vdd vss)
xx0 (y net2 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx1 (net2 a_n vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx3 (y b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx2 (y net2 net1 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx4 (net2 a_n vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx5 (net1 b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nand2b_2
//* View name: schematic
subckt sg13g2_nand2b_2(y a_n b vdd vss)
xx0 (y a vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx1 (a a_n vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx3 (y b vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx2 (y b net1 vss) sg13_lv_nmos (
  w=1.44u l=130.00n ng=2 ad=2.736e-13 as=4.896e-13 pd=2.2e-06 ps=4.24e-06 m=1
)
xx4 (a a_n vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx5 (net1 a vss vss) sg13_lv_nmos (
  w=1.44u l=130.00n ng=2 ad=2.736e-13 as=4.896e-13 pd=2.2e-06 ps=4.24e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nand3_1
//* View name: schematic
subckt sg13g2_nand3_1(y a b c vdd vss)
xx1 (y a vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx2 (y b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx6 (y c vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx3 (net2 b net3 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx4 (net3 c vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx7 (y a net2 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nand3b_1
//* View name: schematic
subckt sg13g2_nand3b_1(y a_n b c vdd vss)
xx0 (net1 a_n vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx1 (y net1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx2 (y b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx6 (y c vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx3 (net2 b net3 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx4 (net3 c vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx5 (net1 a_n vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx7 (y net1 net2 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nand4_1
//* View name: schematic
subckt sg13g2_nand4_1(y a b c d vdd vss)
xp0 (y d vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx1 (y a vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx2 (y b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx6 (y c vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx3 (net2 b net3 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx4 (net3 c net5 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx7 (y a net2 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn0 (net5 d vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nor2_1
//* View name: schematic
subckt sg13g2_nor2_1(y a b vdd vss)
xx0 (y a vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx3 (y b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx1 (net1 a vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx2 (y b net1 vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nor2_2
//* View name: schematic
subckt sg13g2_nor2_2(y a b vdd vss)
xx0 (y a vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xx3 (y b vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xx1 (net1 a vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx2 (y b net1 vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nor2b_1
//* View name: schematic
subckt sg13g2_nor2b_1(y a b_n vdd vss)
xn0 (b b_n vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx0 (y a vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx3 (y b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xp0 (b b_n vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx1 (net1 b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx2 (y a net1 vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nor2b_2
//* View name: schematic
subckt sg13g2_nor2b_2(y a b_n vdd vss)
xn0 (b b_n vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx0 (y a vss vss) sg13_lv_nmos (
  w=1.44u l=130.00n ng=2 ad=2.736e-13 as=4.896e-13 pd=2.2e-06 ps=4.24e-06 m=1
)
xx3 (y b vss vss) sg13_lv_nmos (
  w=1.44u l=130.00n ng=2 ad=2.736e-13 as=4.896e-13 pd=2.2e-06 ps=4.24e-06 m=1
)
xp0 (b b_n vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx1 (net1 b vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx2 (y a net1 vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nor3_1
//* View name: schematic
subckt sg13g2_nor3_1(y a b c vdd vss)
xx3 (y c net2 vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx0 (net2 b net3 vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx2 (net3 a vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx4 (y a vss vss) sg13_lv_nmos (
  w=770.00n l=130.00n ng=1 ad=2.618e-13 as=2.618e-13 pd=2.22e-06 ps=2.22e-06 m=1
)
xx1 (y b vss vss) sg13_lv_nmos (
  w=770.00n l=130.00n ng=1 ad=2.618e-13 as=2.618e-13 pd=2.22e-06 ps=2.22e-06 m=1
)
xx5 (y c vss vss) sg13_lv_nmos (
  w=770.00n l=130.00n ng=1 ad=2.618e-13 as=2.618e-13 pd=2.22e-06 ps=2.22e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nor3_2
//* View name: schematic
subckt sg13g2_nor3_2(y a b c vdd vss)
xx3 (y c net2 vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx0 (net2 b net3 vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx2 (net3 a vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx4 (y a vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xx1 (y b vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xx5 (y c vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nor4_1
//* View name: schematic
subckt sg13g2_nor4_1(y a b c d vdd vss)
xx0 (net3 a vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx5 (net2 b net3 vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx6 (net1 c net2 vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx7 (y d net1 vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx1 (y a vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx2 (y d vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx3 (y b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx4 (y c vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_nor4_2
//* View name: schematic
subckt sg13g2_nor4_2(y a b c d vdd vss)
xx0 (net3 a vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx5 (net2 b net3 vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx6 (net1 c net2 vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx7 (y d net1 vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx1 (y a vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xx2 (y d vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xx3 (y b vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xx4 (y c vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_o21ai_1
//* View name: schematic
subckt sg13g2_o21ai_1(y a1 a2 b1 vdd vss)
xp2 (net14 a1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=150.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp1 (y a2 net14 vdd) sg13_lv_pmos (
  w=1.12u l=150.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp0 (y b1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=150.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xn2 (net1 a2 vss vss) sg13_lv_nmos (
  w=740.00n l=150.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn3 (net1 a1 vss vss) sg13_lv_nmos (
  w=740.00n l=150.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn0 (y b1 net1 vss) sg13_lv_nmos (
  w=740.00n l=150.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_or2_1
//* View name: schematic
subckt sg13g2_or2_1(x a b vdd vss)
xp0 (net2 b net3 vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp1 (net3 a vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp2 (x net2 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xn0 (net2 a vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn1 (net2 b vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn2 (x net2 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_or2_2
//* View name: schematic
subckt sg13g2_or2_2(x a b vdd vss)
xp0 (net2 b net3 vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp1 (net3 a vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp2 (x net2 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xn0 (net2 a vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn1 (net2 b vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn2 (x net2 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_or3_1
//* View name: schematic
subckt sg13g2_or3_1(x a b c vdd vss)
xx0 (net1 c vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx1 (x net1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx6 (net1 b vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx7 (net1 a vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx2 (x net1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx3 (net9 b net12 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx4 (net12 a vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx5 (net1 c net9 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_or3_2
//* View name: schematic
subckt sg13g2_or3_2(x a b c vdd vss)
xx0 (net1 c vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx1 (x net1 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xx6 (net1 b vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx7 (net1 a vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx2 (x net1 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xx3 (net9 b net12 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx4 (net12 a vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx5 (net1 c net9 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_or4_1
//* View name: schematic
subckt sg13g2_or4_1(x a b c d vdd vss)
xn4 (x net1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn3 (net1 d vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn2 (net1 c vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn1 (net1 b vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn0 (net1 a vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xp4 (net4 a vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp3 (net3 b net4 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp2 (net2 c net3 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp1 (net1 d net2 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp0 (x net1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_or4_2
//* View name: schematic
subckt sg13g2_or4_2(x a b c d vdd vss)
xn4 (x net1 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xn3 (net1 d vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn2 (net1 c vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn1 (net1 b vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn0 (net1 a vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xp4 (net4 a vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp3 (net3 b net4 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp2 (net2 c net3 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp1 (net1 d net2 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp0 (x net1 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_sdfbbp_1
//* View name: schematic
subckt sg13g2_sdfbbp_1(q q_n clk d reset_b scd sce set_b vdd vss)
xx46 (resetbb reset_b vdd vdd) sg13_lv_pmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx45 (pre_q dbblatch2 net8 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx44 (pre_q set_b vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx41 (clkbb clkb vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx39 (sceb sce vdd vdd) sg13_lv_pmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx38 (db d net3 vdd) sg13_lv_pmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx33 (dbbtg clkb net10 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx28 (net10 dblatchm vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx27 (net3 sce vdd vdd) sg13_lv_pmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx26 (q_n pre_q vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx24 (net1 dblatchm vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx19 (net8 resetbb vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx17 (dblatchm set_b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx16 (net2 scd vdd vdd) sg13_lv_pmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx15 (clkb clk vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx14 (dblatchm dbbtg net7 vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx11 (db clkbb dbbtg vdd) sg13_lv_pmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx9 (db sceb net2 vdd) sg13_lv_pmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx8 (pre_qb pre_q vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx7 (net7 resetbb vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx6 (net6 pre_q vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx5 (dbblatch2 clkbb net6 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx4 (dbblatch2 clkb net1 vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx3 (q pre_qb vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xn1 (db sce net5 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn0 (net5 scd vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx47 (pre_q dbblatch2 net11 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx43 (db clkb dbbtg vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx42 (net4 sceb vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx40 (clkbb clkb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx37 (resetbb reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx36 (net14 pre_q vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx35 (dblatchm dbbtg net12 vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx34 (sceb sce vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx32 (net12 set_b vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx31 (net15 dblatchm vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx29 (net11 set_b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx25 (dbbtg clkbb net15 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx23 (db d net4 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx22 (pre_qb pre_q vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx21 (dbblatch2 clkb net14 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx20 (q pre_qb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx18 (net13 dblatchm vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx13 (clkb clk vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx10 (dbblatch2 clkbb net13 vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx2 (dblatchm resetbb net12 vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx1 (q_n pre_q vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx0 (pre_q resetbb net11 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_sighold
//* View name: schematic
subckt sg13g2_sighold(sh vdd vss)
xn0 (net1 sh vss vss) sg13_lv_nmos (
  w=300.0n l=130.00n ng=1 ad=1.02e-13 as=1.02e-13 pd=1.28e-06 ps=1.28e-06 m=1
)
xn1 (sh net1 vss vss) sg13_lv_nmos (
  w=300.0n l=700.0n ng=1 ad=1.02e-13 as=1.02e-13 pd=1.28e-06 ps=1.28e-06 m=1
)
xp0 (net1 sh vdd vdd) sg13_lv_pmos (
  w=450.00n l=130.00n ng=1 ad=1.53e-13 as=1.53e-13 pd=1.58e-06 ps=1.58e-06 m=1
)
xp1 (sh net1 vdd vdd) sg13_lv_pmos (
  w=300.0n l=700.0n ng=1 ad=1.02e-13 as=1.02e-13 pd=1.28e-06 ps=1.28e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_slgcp_1
//* View name: schematic
subckt sg13g2_slgcp_1(gclk clk gate sce vdd vss)
xx19 (gclk net5 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx18 (net1 clkbb net6 vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx16 (clkbb clkb vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx14 (net5 int_gate vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx13 (net3 sce vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx11 (net6 clkb net4 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx9 (int_gate net6 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx7 (clkb clk vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx5 (net5 clk vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx3 (net4 int_gate vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx2 (net1 gate net3 vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xx21 (int_gate net6 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx20 (net2 clk vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx17 (net1 sce vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx15 (net6 clkb net1 vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx12 (net7 int_gate vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xx10 (net5 int_gate net2 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xx8 (gclk net5 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx6 (clkbb clkb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx4 (net1 gate vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx1 (clkb clk vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx0 (net6 clkbb net7 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_tiehi
//* View name: schematic
subckt sg13g2_tiehi(l_hi vdd vss)
xmn2 (net3 net2 vss vss) sg13_lv_nmos (
  w=795.00n l=130.00n ng=1 ad=2.703e-13 as=2.703e-13 pd=2.27e-06 ps=2.27e-06 m=1
)
xmn1 (net1 net1 vss vss) sg13_lv_nmos (
  w=300n l=130.00n ng=1 ad=1.02e-13 as=1.02e-13 pd=1.28e-06 ps=1.28e-06 m=1
)
xmp2 (l_hi net3 vdd vdd) sg13_lv_pmos (
  w=1.155u l=130.00n ng=1 ad=3.927e-13 as=3.927e-13 pd=2.99e-06 ps=2.99e-06 m=1
)
xmp1 (net2 net1 vdd vdd) sg13_lv_pmos (
  w=660.0n l=130.00n ng=1 ad=2.244e-13 as=2.244e-13 pd=2e-06 ps=2e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_tielo
//* View name: schematic
subckt sg13g2_tielo(l_lo vdd vss)
xmn1 (net3 net2 vss vss) sg13_lv_nmos (
  w=385.00n l=130.00n ng=1 ad=1.309e-13 as=1.309e-13 pd=1.45e-06 ps=1.45e-06 m=1
)
xmn2 (l_lo net1 vss vss) sg13_lv_nmos (
  w=880.0n l=130.00n ng=1 ad=2.992e-13 as=2.992e-13 pd=2.44e-06 ps=2.44e-06 m=1
)
xmp1 (net2 net2 vdd vdd) sg13_lv_pmos (
  w=300n l=130.00n ng=1 ad=1.02e-13 as=1.02e-13 pd=1.28e-06 ps=1.28e-06 m=1
)
xmp2 (net1 net3 vdd vdd) sg13_lv_pmos (
  w=1.045u l=130.00n ng=1 ad=3.553e-13 as=3.553e-13 pd=2.77e-06 ps=2.77e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_xnor2_1
//* View name: schematic
subckt sg13g2_xnor2_1(y a b vdd vss)
xp9 (y net1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp8 (y b net4 vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp7 (net4 a vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp1 (net1 b vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp0 (net1 a vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xn4 (y net1 net3 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn6 (net2 a vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn5 (net1 b net2 vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xn3 (net3 b vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (net3 a vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_xor2_1
//* View name: schematic
subckt sg13g2_xor2_1(x a b vdd vss)
xx0 (net1 a vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx4 (x b net3 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx6 (x net1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx8 (net3 a vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xx9 (net1 b vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xx1 (net6 a vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx2 (net1 b net6 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xx3 (net5 a vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx5 (net5 b vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xx7 (x net1 net5 vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_a22oi_1
//* View name: schematic
subckt sg13g2_a22oi_1(y a1 a2 b1 b2 vdd vss)
xn3 (net1 b1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xmnb0 (y b2 net1 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xmna1 (snda1 a2 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xmna0 (y a1 snda1 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xp3 (y b1 pnda vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xmpb0 (y b2 pnda vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xmpa1 (pnda a2 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xmpa0 (pnda a1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_sdfrbpq_2
//* View name: schematic
subckt sg13g2_sdfrbpq_2(q clk d reset_b scd sce vdd vss)
xn22 (db scd net63 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn21 (db d net65 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn19 (sceb sce vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn18 (net63 sce vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn17 (net65 sceb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn23 (dbb db vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn13 (net12 net2 vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn14 (net5 clkneg net12 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn15 (net2 net5 net11 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn16 (net11 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn6 (q net2 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xn0 (dbbb dbb net10 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn1 (net10 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn7 (dbbb clkneg net6 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn8 (net6 clkpos net9 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn9 (net9 net4 net8 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn10 (net8 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn11 (net4 net6 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (clkneg clk vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn12 (net4 clkpos net5 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn3 (clkpos clkneg vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xp22 (net64 sce vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp21 (net62 sceb vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp20 (sceb sce vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp18 (db scd net62 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp17 (db d net64 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp23 (dbb db vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp14 (net5 clkpos net3 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp15 (net2 net5 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp16 (net2 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp6 (q net2 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp7 (dbbb clkpos net6 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp0 (dbbb reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp1 (dbbb dbb vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp8 (net7 net4 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp9 (net6 clkneg net7 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp10 (net6 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp2 (clkneg clk vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp3 (clkpos clkneg vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp11 (net4 net6 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp12 (net4 clkneg net5 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp13 (net3 net2 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_sdfrbpq_1
//* View name: schematic
subckt sg13g2_sdfrbpq_1(q clk d reset_b scd sce vdd vss)
xn22 (db scd net63 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn21 (db d net65 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn19 (sceb sce vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn18 (net63 sce vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn17 (net65 sceb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn13 (net12 net2 vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn14 (net5 clkneg net12 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn15 (net2 net5 net11 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn16 (net11 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn6 (q net2 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn0 (dbbb dbb net10 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn1 (net10 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn7 (dbbb clkneg net6 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn8 (net6 clkpos net9 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn9 (net9 net4 net8 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn10 (net8 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn11 (net4 net6 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (clkneg clk vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn12 (net4 clkpos net5 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn3 (clkpos clkneg vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn23 (dbb db vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xp22 (net64 sce vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp21 (net62 sceb vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp20 (sceb sce vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp18 (db scd net62 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp17 (db d net64 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp14 (net5 clkpos net3 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp15 (net2 net5 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp16 (net2 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp6 (q net2 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp7 (dbbb clkpos net6 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp0 (dbbb reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp1 (dbbb dbb vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp8 (net7 net4 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp9 (net6 clkneg net7 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp10 (net6 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp2 (clkneg clk vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp3 (clkpos clkneg vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp11 (net4 net6 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp12 (net4 clkneg net5 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp23 (dbb db vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp13 (net3 net2 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_sdfrbp_2
//* View name: schematic
subckt sg13g2_sdfrbp_2(q q_n clk d reset_b scd sce vdd vss)
xn22 (db scd net63 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn21 (db d net65 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn19 (sceb sce vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn18 (net63 sce vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn17 (net65 sceb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn23 (dbb db vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn13 (net12 net2 vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn14 (net5 clkneg net12 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn15 (net2 net5 net11 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn16 (net11 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn6 (q_n net5 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xn0 (dbbb dbb net10 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn1 (net10 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn7 (dbbb clkneg net6 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn8 (net6 clkpos net9 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn9 (net9 net4 net8 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn10 (net8 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn11 (net4 net6 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (clkneg clk vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn12 (net4 clkpos net5 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn3 (clkpos clkneg vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn4 (q net1 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xn5 (net1 net5 vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xp22 (net64 sce vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp21 (net62 sceb vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp20 (sceb sce vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp18 (db scd net62 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp17 (db d net64 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp23 (dbb db vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp14 (net5 clkpos net3 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp15 (net2 net5 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp16 (net2 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp6 (q_n net5 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp7 (dbbb clkpos net6 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp0 (dbbb reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp1 (dbbb dbb vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp8 (net7 net4 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp9 (net6 clkneg net7 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp10 (net6 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp2 (clkneg clk vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp3 (clkpos clkneg vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp11 (net4 net6 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp12 (net4 clkneg net5 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp4 (q net1 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp13 (net3 net2 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp5 (net1 net5 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_sdfrbp_1
//* View name: schematic
subckt sg13g2_sdfrbp_1(q q_n clk d reset_b scd sce vdd vss)
xn22 (db scd net63 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn21 (db d net65 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn19 (sceb sce vss vss) sg13_lv_nmos (
  w=550.00n l=130.00n ng=1 ad=1.87e-13 as=1.87e-13 pd=1.78e-06 ps=1.78e-06 m=1
)
xn18 (net63 sce vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn17 (net65 sceb vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn23 (net13 db vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn13 (net12 net2 vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn14 (net5 clkneg net12 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn15 (net2 net5 net11 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn16 (net11 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn6 (q_n net5 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn0 (dbb net13 net10 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn1 (net10 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn7 (dbb clkneg net6 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn8 (net6 clkpos net9 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn9 (net9 net4 net8 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn10 (net8 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn11 (net4 net6 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (clkneg clk vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn12 (net4 clkpos net5 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn3 (clkpos clkneg vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn4 (q net1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn5 (net1 net5 vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xp22 (net64 sce vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp21 (net62 sceb vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp20 (sceb sce vdd vdd) sg13_lv_pmos (
  w=840.00n l=130.00n ng=1 ad=2.856e-13 as=2.856e-13 pd=2.36e-06 ps=2.36e-06 m=1
)
xp18 (db scd net62 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp17 (db d net64 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp23 (net13 db vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp14 (net5 clkpos net3 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp15 (net2 net5 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp16 (net2 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp6 (q_n net5 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp7 (dbb clkpos net6 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp0 (dbb reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp1 (dbb net13 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp8 (net7 net4 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp9 (net6 clkneg net7 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp10 (net6 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp2 (clkneg clk vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp3 (clkpos clkneg vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp11 (net4 net6 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp12 (net4 clkneg net5 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp4 (q net1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp13 (net3 net2 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp5 (net1 net5 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_dfrbpq_2
//* View name: schematic
subckt sg13g2_dfrbpq_2(q clk d reset_b vdd vss)
xn13 (net12 net2 vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn14 (net5 clkneg net12 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn15 (net2 net5 net11 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn16 (net11 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn0 (db d net10 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn1 (net10 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn7 (db clkneg net6 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn8 (net6 clkpos net9 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn9 (net9 net4 net8 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn10 (net8 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn11 (net4 net6 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (clkneg clk vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn12 (net4 clkpos net5 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn3 (clkpos clkneg vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn4 (q net1 vss vss) sg13_lv_nmos (
  w=1.48u l=130.00n ng=2 ad=2.812e-13 as=5.032e-13 pd=2.24e-06 ps=4.32e-06 m=1
)
xn5 (net1 net5 vss vss) sg13_lv_nmos (
  w=640.00n l=130.00n ng=1 ad=2.176e-13 as=2.176e-13 pd=1.96e-06 ps=1.96e-06 m=1
)
xp14 (net5 clkpos net3 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp15 (net2 net5 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp16 (net2 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp7 (db clkpos net6 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp0 (db reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp1 (db d vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp8 (net7 net4 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp9 (net6 clkneg net7 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp10 (net6 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp2 (clkneg clk vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp3 (clkpos clkneg vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp11 (net4 net6 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp12 (net4 clkneg net5 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp4 (q net1 vdd vdd) sg13_lv_pmos (
  w=2.24u l=130.00n ng=2 ad=4.256e-13 as=7.616e-13 pd=3e-06 ps=5.84e-06 m=1
)
xp13 (net3 net2 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp5 (net1 net5 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_dfrbpq_1
//* View name: schematic
subckt sg13g2_dfrbpq_1(q clk d reset_b vdd vss)
xn13 (net12 net2 vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn14 (net5 clkneg net12 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn15 (net2 net5 net11 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn16 (net11 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn0 (db d net10 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn1 (net10 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn7 (db clkneg net6 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn8 (net6 clkpos net9 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn9 (net9 net4 net8 vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn10 (net8 reset_b vss vss) sg13_lv_nmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xn11 (net4 net6 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn2 (clkneg clk vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn12 (net4 clkpos net5 vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn3 (clkpos clkneg vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn4 (q net1 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xn5 (net1 net5 vss vss) sg13_lv_nmos (
  w=740.00n l=130.00n ng=1 ad=2.516e-13 as=2.516e-13 pd=2.16e-06 ps=2.16e-06 m=1
)
xp14 (net5 clkpos net3 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp15 (net2 net5 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp16 (net2 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp7 (db clkpos net6 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp0 (db reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp1 (db d vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp8 (net7 net4 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp9 (net6 clkneg net7 vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp10 (net6 reset_b vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp2 (clkneg clk vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp3 (clkpos clkneg vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp11 (net4 net6 vdd vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp12 (net4 clkneg net5 vdd) sg13_lv_pmos (
  w=1.000u l=130.00n ng=1 ad=3.4e-13 as=3.4e-13 pd=2.68e-06 ps=2.68e-06 m=1
)
xp4 (q net1 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
xp13 (net3 net2 vdd vdd) sg13_lv_pmos (
  w=420.00n l=130.00n ng=1 ad=1.428e-13 as=1.428e-13 pd=1.52e-06 ps=1.52e-06 m=1
)
xp5 (net1 net5 vdd vdd) sg13_lv_pmos (
  w=1.12u l=130.00n ng=1 ad=3.808e-13 as=3.808e-13 pd=2.92e-06 ps=2.92e-06 m=1
)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_fill_1
//* View name: schematic
subckt sg13g2_fill_1(vdd vss)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_fill_2
//* View name: schematic
subckt sg13g2_fill_2(vdd vss)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_fill_4
//* View name: schematic
subckt sg13g2_fill_4(vdd vss)
ends
//* End of subcircuit definition.

//* Library name: sg13g2_stdcell
//* Cell name: sg13g2_fill_8
//* View name: schematic
subckt sg13g2_fill_8(vdd vss)
ends
//* End of subcircuit definition.
