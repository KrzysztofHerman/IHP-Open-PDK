v {xschem version=3.4.4 file_version=1.2
}
G {}
K {}
V {}
S {}
E {}
B 2 160 -630 960 -230 {flags=graph
y1=0.83
y2=1.7
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=7.95424
x2=11.0002
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0
node="s_1_1
s_2_2

s_2_1"
color="8 4 7"
dataset=-1
unitx=1
logx=1
logy=0
}
B 2 -710 -640 90 -240 {flags=graph

y2=4700
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=7.95424
x2=11.0002
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0


dataset=-1
unitx=1
logx=1
logy=0



y1=10

color=6
node=z_1_1}
B 2 -1520 -650 -720 -250 {flags=graph

y2=180
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=7.95424
x2=11.0002
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0


dataset=-1
unitx=1
logx=1
logy=0



y1=-180

color=6
node=ph(z_1_1)}
T {Nx - number of emitters} 220 130 0 0 0.2 0.2 {}
N -240 80 -240 100 {
lab=GND}
N -240 10 -240 20 {
lab=#net1}
N 260 40 260 100 {
lab=GND}
N 720 55 720 115 {
lab=GND}
N 260 -60 260 -20 {
lab=#net2}
N 720 -45 720 -5 {
lab=out}
N 260 10 310 10 {
lab=GND}
N 310 10 310 100 {
lab=GND}
N 210 10 220 10 {
lab=#net3}
N -240 10 -220 10 {
lab=#net1}
N 130 10 210 10 {
lab=#net3}
N 180 -20 180 10 {
lab=#net3}
N -580 -70 -580 -50 {
lab=GND}
N -580 -140 -580 -130 {
lab=Vb}
N -500 -70 -500 -50 {
lab=GND}
N -500 -140 -500 -130 {
lab=Vc}
N -580 -170 -580 -140 {
lab=Vb}
N -500 -170 -500 -140 {
lab=Vc}
N 260 -60 290 -60 {
lab=#net2}
N 260 -160 260 -140 {
lab=Vc}
N 260 -80 260 -60 {
lab=#net2}
N 180 -60 180 -20 {
lab=#net3}
N 180 -160 180 -120 {
lab=Vb}
N 290 -60 350 -60 {
lab=#net2}
N 720 -75 720 -45 {
lab=out}
N 580 -60 720 -60 {
lab=out}
N 410 -60 430 -60 {
lab=out}
N 0 10 70 10 {
lab=#net1}
N -220 10 -160 10 {
lab=#net1}
N -160 10 10 10 {
lab=#net1}
N 510 -60 580 -60 {
lab=out}
N 440 -60 510 -60 {
lab=out}
N 430 -60 440 -60 {
lab=out}
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
sp dec 1000 9e7 1e11 1
let z11m = abs(z_1_1)
meas ac z11 FIND z11m AT=1e9
let phz=ph(z_1_1)
meas ac p11 FIND phz AT=1e9
let z22m = abs(z_2_2)
meas ac z22 FIND z22m AT=1e9
let phz22=ph(z_2_2)
meas ac p22 FIND phz22 AT=1e9


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

meas ac s21_max max s_2_1 from=9e8 to=5.1e9
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
C {devices/gnd.sym} 260 100 0 0 {name=l1 lab=GND}
C {devices/gnd.sym} -240 100 0 0 {name=l2 lab=GND}
C {devices/vsource.sym} 720 25 0 0 {name=V4 value="dc 0 ac 0 portnum 2 z0 50"
}
C {devices/gnd.sym} 720 115 0 0 {name=l3 lab=GND}
C {devices/gnd.sym} 310 100 0 0 {name=l4 lab=GND}
C {devices/title.sym} -130 260 0 0 {name=l5 author="Copyright 2023 IHP PDK Authors"}
C {sg13g2_pr/npn13G2.sym} 240 10 0 0 {name=Q1
model=npn13G2
spiceprefix=X
Nx=1}
C {devices/lab_pin.sym} 260 -160 0 0 {name=p1 sig_type=std_logic lab=Vc}
C {devices/vsource.sym} -240 50 0 0 {name=V3 value="dc 0 ac 1 portnum 1 z0 50"}
C {devices/lab_pin.sym} 180 -160 0 0 {name=p2 sig_type=std_logic lab=Vb}
C {devices/gnd.sym} -580 -50 0 0 {name=l6 lab=GND}
C {devices/vsource.sym} -580 -100 0 0 {name=V1 value=0.88}
C {devices/gnd.sym} -500 -50 0 0 {name=l7 lab=GND}
C {devices/vsource.sym} -500 -100 0 0 {name=V2 value=1.3}
C {devices/lab_pin.sym} -580 -170 0 0 {name=p7 sig_type=std_logic lab=Vb}
C {devices/lab_pin.sym} -500 -170 0 0 {name=p8 sig_type=std_logic lab=Vc}
C {devices/capa.sym} 100 10 1 0 {name=C1
m=1
value=66p
footprint=1206
device="ceramic capacitor"}
C {devices/capa.sym} 380 -60 3 0 {name=C2
m=1
value=66p
footprint=1206
device="ceramic capacitor"}
C {devices/ind.sym} 180 -90 0 0 {name=L8
m=1
value=5u
footprint=1206
device=inductor}
C {devices/ind.sym} 260 -110 0 0 {name=L9
m=1
value=5u
footprint=1206
device=inductor}
C {devices/launcher.sym} -170 -170 0 0 {name=h5
descr="load waves" 
tclcommand="xschem raw_read $netlist_dir/sp_hbt_13g2_lna.raw ac"
}
C {devices/lab_pin.sym} 720 -75 0 0 {name=p3 sig_type=std_logic lab=out}
