v {xschem version=3.4.4 file_version=1.2
}
G {}
K {}
V {}
S {}
E {}
B 2 30 -860 830 -460 {flags=graph
y1=0.0013
y2=300
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=8
x2=12.0004
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
B 2 -820 -870 -20 -470 {flags=graph
y1=0.26
y2=3.4
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=8
x2=12.0004
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0
node=s_1_1
color=8
dataset=-1
unitx=1
logx=1
logy=0
}
B 2 890 -860 1690 -460 {flags=graph
y1=0.39
y2=17
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=8
x2=12.0004
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0


dataset=-1
unitx=1
logx=1
logy=0

color=6
node=s_2_2}
B 2 -830 -1310 -30 -910 {flags=graph
y1=0.0093

ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=8
x2=12.0004
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0


dataset=-1
unitx=1
logx=1
logy=0
color=8
node=vc
y2=40}
B 2 60 -1310 860 -910 {flags=graph
y1=-7.9
y2=-0.54
ypos1=0
ypos2=2
divy=5
subdivy=8
unity=1
x1=8
x2=12.0004
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0
node=s_1_2
color=8
dataset=-1
unitx=1
logx=1
logy=1
}
N -290 0 -290 10 {
lab=#net1}
N 230 120 230 180 {
lab=GND}
N -290 0 -270 0 {
lab=#net1}
N 80 30 80 90 {
lab=GND}
N 80 -70 80 -30 {
lab=Vc}
N 440 -70 440 -30 {
lab=#net2}
N 80 0 130 0 {
lab=GND}
N 130 0 130 90 {
lab=GND}
N 30 0 40 0 {
lab=Vb}
N 60 -70 80 -70 {
lab=Vc}
N -50 0 30 0 {
lab=Vb}
N 0 -30 0 0 {
lab=Vb}
N 80 100 80 180 {
lab=GND}
N 80 90 80 100 {
lab=GND}
N 130 90 130 180 {
lab=GND}
N 440 100 440 180 {
lab=GND}
N 440 -30 440 40 {
lab=#net2}
N 80 -150 80 -70 {
lab=Vc}
N 80 -150 110 -150 {
lab=Vc}
N 170 -150 290 -150 {
lab=#net2}
N 440 -150 440 -70 {
lab=#net2}
N 80 -70 130 -70 {
lab=Vc}
N 190 -70 210 -70 {
lab=Vout}
N 210 -70 230 -70 {
lab=Vout}
N -80 100 -80 120 {
lab=#net3}
N -80 0 -50 0 {
lab=Vb}
N -80 0 -80 40 {
lab=Vb}
N -140 0 -80 0 {
lab=Vb}
N -290 150 -290 180 {
lab=GND}
N -290 10 -290 90 {
lab=#net1}
N 290 -150 440 -150 {
lab=#net2}
N 230 -70 230 60 {
lab=Vout}
N -270 0 -200 0 {
lab=#net1}
C {devices/code_shown.sym} -840 -310 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib $::SG13G2_MODELS/cornerHBT.lib hbt_typ
"}
C {devices/code_shown.sym} -850 -170 0 0 {name=NGSPICE only_toplevel=true 
value="
.param Rbase=50
.control 
set color0 = white
set color1 = black
set color2 = blue
set xbrushwidth = 5
save all
op
print Vc, Vb, I(Vce)
reset
save all
sp dec 5000 1e8 1e12
*meas ac z11 FIND z_1_1 AT=1e10
let phiz = ph(z_1_1)
*meas ac pz11 FIND phiz AT=1e10
*let X = z11*cos(pz11)
*let Y = z11*sin(pz11)
*print X, Y
*plot s_1_1 smith
*plot z_1_1 smith
write sp_hbt_13g2_lna.raw
quit
.endc
"


}
C {devices/gnd.sym} -290 180 0 0 {name=l2 lab=GND}
C {devices/vsource.sym} 230 90 0 0 {name=V4 value="dc 0 ac 0 portnum 2 z0 50"
}
C {devices/gnd.sym} 230 180 0 0 {name=l3 lab=GND}
C {devices/title.sym} -130 260 0 0 {name=l5 author="Copyright 2023 IHP PDK Authors"}
C {devices/vsource.sym} -290 120 0 0 {name=V3 value="dc 0 ac 1m portnum 1 z0 50"}
C {devices/launcher.sym} -200 -420 0 0 {name=h5
descr="load waves" 
tclcommand="xschem raw_read $netlist_dir/sp_hbt_13g2_lna.raw ac"
}
C {devices/gnd.sym} 80 180 0 0 {name=l1 lab=GND}
C {devices/gnd.sym} -80 180 0 0 {name=l4 lab=GND}
C {devices/vsource.sym} 440 70 0 0 {name=Vce value=1.3}
C {devices/gnd.sym} 440 180 0 0 {name=l6 lab=GND}
C {devices/gnd.sym} 130 180 0 0 {name=l7 lab=GND}
C {sg13g2_pr/npn13G2.sym} 60 0 0 0 {name=Q1
model=npn13G2
spiceprefix=X
Nx=2}
C {devices/lab_pin.sym} 60 -70 0 0 {name=p1 sig_type=std_logic lab=Vc}
C {devices/lab_pin.sym} 0 -30 0 0 {name=p2 sig_type=std_logic lab=Vb}
C {devices/vsource.sym} -80 150 0 0 {name=Vbe value=0.88}
C {devices/capa.sym} 160 -70 1 0 {name=C1
m=1
value=700f
footprint=1206
device="ceramic capacitor"}
C {devices/lab_pin.sym} 230 -70 2 0 {name=p3 sig_type=std_logic lab=Vout}
C {devices/capa.sym} -170 0 1 0 {name=C2
m=1
value=300f
footprint=1206
device="ceramic capacitor"}
C {devices/ind.sym} 140 -150 1 0 {name=L8
m=1
value=33.7n
footprint=1206
device=inductor}
C {devices/ind.sym} -80 70 2 0 {name=L9
m=1
value=55.2n
footprint=1206
device=inductor}
