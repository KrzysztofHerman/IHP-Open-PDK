v {xschem version=3.4.4 file_version=1.2
}
G {}
K {}
V {}
S {}
E {}
B 2 160 -630 960 -230 {flags=graph
y1=4.3e-18
y2=1
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=4.95424
x2=11.0002
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0
node="s_2_2
s_2_1
s_1_1"
color="8 4 7"
dataset=-1
unitx=1
logx=1
logy=0
}
B 2 -710 -640 90 -240 {flags=graph

y2=69000
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=4.95424
x2=11.0002
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0


dataset=-1
unitx=1
logx=1
logy=0



y1=30

color=6
node=z_1_1}
B 2 -1520 -650 -720 -250 {flags=graph

y2=450
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=4.95424
x2=11.0002
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0


dataset=-1
unitx=1
logx=1
logy=0



y1=40


color=7
node=z_2_2}
B 2 980 -630 1780 -230 {flags=graph
y1=4.3e-18
y2=0.065
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=4.95424
x2=11.0002
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0
node=s_2_1
color=8
dataset=-1
unitx=1
logx=1
logy=0
}
T {Nx - number of emitters} 220 130 0 0 0.2 0.2 {}
N -675 70 -675 90 {
lab=GND}
N -675 0 -675 10 {
lab=#net1}
N -675 0 -655 0 {
lab=#net1}
N -480 0 -240 0 {
lab=#net2}
N -460 0 -460 30 {
lab=#net2}
N -370 0 -370 30 {
lab=#net2}
N -280 0 -280 30 {
lab=#net2}
N 605 80 605 95 {
lab=GND}
N 605 0 605 20 {
lab=#net3}
N 110 0 350 0 {
lab=#net4}
N 130 0 130 30 {
lab=#net4}
N 220 0 220 30 {
lab=#net4}
N 310 0 310 30 {
lab=#net4}
N -150 80 -150 90 {
lab=GND}
N -180 0 -120 0 {
lab=#net5}
N -60 0 -0 0 {
lab=#net6}
N 60 -0 110 -0 {
lab=#net4}
N -40 0 -40 20 {
lab=#net6}
N -150 0 -150 20 {
lab=#net5}
N -490 0 -480 0 {
lab=#net2}
N -570 0 -550 0 {
lab=#net7}
N -650 0 -630 0 {
lab=#net1}
N -660 0 -650 0 {
lab=#net1}
N 540 -0 590 0 {
lab=#net3}
N 590 0 605 0 {
lab=#net3}
N 350 0 380 0 {
lab=#net4}
N 440 0 480 0 {
lab=#net8}
C {devices/code_shown.sym} -200 160 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib $::SG13G2_MODELS/cornerHBT.lib hbt_typ
"}
C {devices/code_shown.sym} 1090 -120 0 0 {name=NGSPICE only_toplevel=true 
value="
.param Rbase=50
.control 
save all
sp dec 1000 9e4 1e11 1
let z11m = abs(z_1_1)
meas ac z11 FIND z11m AT=30e6
let phz=ph(z_1_1)
meas ac p11 FIND phz AT=30e6
let z22m = abs(z_2_2)
meas ac z22 FIND z22m AT=30e6
let phz22=ph(z_2_2)
meas ac p22 FIND phz22 AT=30e6


let s11m = abs(s_1_1)
meas ac s11 FIND s11m at=1e9
let phs11=ph(s_1_1)
meas ac ps11 FIND phs11 at=1e9

let s22m = abs(s_2_2)
meas ac s22 FIND s22m at=1e9
let phs22=ph(s_2_2)
meas ac ps22 FIND phs22 at=1e9

set color0 = white
set color1 = red
set color2 = blue
set xbrushwidth=5

*plot s_1_1 smithgrid
*plot z_1_1 smith

*meas ac s21_max max s_2_1 from=9e8 to=5.1e9
write sp_hbt_13g2_lna.raw
*reset
*save all
*noise V(Vc) v3 lin 10k 9e8 1.1e9 
*print inoise_total onoise_total 
*setplot noise1
*write noise_hbt_13g2_lna.raw all
.endc
"


}
C {devices/gnd.sym} -675 90 0 0 {name=l2 lab=GND}
C {devices/vsource.sym} 605 50 0 0 {name=V4 value="dc 0 ac 0 portnum 2 z0 50"
}
C {devices/gnd.sym} 605 95 0 0 {name=l3 lab=GND}
C {devices/title.sym} -130 260 0 0 {name=l5 author="Copyright 2023 IHP PDK Authors"}
C {devices/vsource.sym} -675 40 0 0 {name=V3 value="dc 0 ac 0 portnum 1 z0 50"}
C {devices/capa.sym} -460 60 2 0 {name=C1
m=1
value=66p
footprint=1206
device="ceramic capacitor"}
C {devices/ind.sym} -370 60 2 0 {name=L9
m=1
value=5u
footprint=1206
device=inductor}
C {devices/launcher.sym} -170 -170 0 0 {name=h5
descr="load waves" 
tclcommand="xschem raw_read $netlist_dir/sp_hbt_13g2_lna.raw ac"
}
C {devices/res.sym} -280 60 2 0 {name=R1
value=10k
footprint=1206
device=resistor
m=1}
C {devices/gnd.sym} -460 90 0 0 {name=l1 lab=GND}
C {devices/gnd.sym} -370 90 0 0 {name=l4 lab=GND}
C {devices/gnd.sym} -280 90 0 0 {name=l6 lab=GND}
C {devices/ind.sym} -90 0 1 0 {name=L7
m=1
value=100n
footprint=1206
device=inductor}
C {devices/res.sym} 30 0 3 0 {name=R2
value=10
footprint=1206
device=resistor
m=1}
C {devices/capa.sym} -150 50 2 0 {name=C2
m=1
value=550p
footprint=1206
device="ceramic capacitor"}
C {devices/capa.sym} 130 60 2 0 {name=C3
m=1
value=666p
footprint=1206
device="ceramic capacitor"}
C {devices/ind.sym} 220 60 2 0 {name=L8
m=1
value=10n
footprint=1206
device=inductor}
C {devices/res.sym} 310 60 2 0 {name=R3
value=10k
footprint=1206
device=resistor
m=1}
C {devices/gnd.sym} 130 90 0 0 {name=l10 lab=GND}
C {devices/gnd.sym} 220 90 0 0 {name=l11 lab=GND}
C {devices/gnd.sym} 310 90 0 0 {name=l12 lab=GND}
C {devices/res.sym} -210 0 3 0 {name=R4
value=10
footprint=1206
device=resistor
m=1}
C {devices/capa.sym} -40 50 2 0 {name=C4
m=1
value=550p
footprint=1206
device="ceramic capacitor"}
C {devices/gnd.sym} -150 90 0 0 {name=l13 lab=GND}
C {devices/gnd.sym} -40 90 0 0 {name=l14 lab=GND}
C {devices/res.sym} -600 0 3 0 {name=R5
value=30
footprint=1206
device=resistor
m=1}
C {devices/ind.sym} -520 0 1 0 {name=L15
m=1
value=110n
footprint=1206
device=inductor}
C {devices/res.sym} 510 0 3 0 {name=R6
value=40
footprint=1206
device=resistor
m=1}
C {devices/capa.sym} 410 0 3 0 {name=C5
m=1
value=4n
footprint=1206
device="ceramic capacitor"}
