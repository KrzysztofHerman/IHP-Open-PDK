v {xschem version=3.4.4 file_version=1.2
}
G {}
K {}
V {}
S {}
E {}
B 2 60 -610 860 -210 {flags=graph
y1=1.3e-05
y2=3.3
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=8.4
x2=12.4
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
B 2 -790 -620 10 -220 {flags=graph
y1=0.25
y2=1
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=8.4
x2=12.4
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
B 2 920 -610 1720 -210 {flags=graph
y1=0.0001
y2=3.2
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=8.4
x2=12.4
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0


dataset=-1
unitx=1
logx=1
logy=0
color=8
node=phiz}
B 2 -800 -1060 0 -660 {flags=graph
y1=0.089
y2=530
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=8.4
x2=12.4
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0


dataset=-1
unitx=1
logx=1
logy=0
color=8
node=z_1_1}
B 2 90 -1060 890 -660 {flags=graph
y1=-0.88
y2=2.9
ypos1=0
ypos2=2
divy=5
subdivy=8
unity=1
x1=8.4
x2=12.4
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0
node=z_2_2
color=8
dataset=-1
unitx=1
logx=1
logy=1
}
T {Nx - number of emitters} 220 130 0 0 0.2 0.2 {}
N 0 80 0 100 {
lab=GND}
N 0 10 0 20 {
lab=#net1}
N 260 40 260 100 {
lab=GND}
N 470 40 470 100 {
lab=GND}
N 260 -60 260 -20 {
lab=#net2}
N 470 -60 470 -20 {
lab=#net3}
N 260 10 310 10 {
lab=GND}
N 310 10 310 100 {
lab=GND}
N 210 10 220 10 {
lab=#net4}
N 0 10 20 10 {
lab=#net1}
N 20 10 70 10 {
lab=#net1}
N 130 10 210 10 {
lab=#net4}
N 180 -20 180 10 {
lab=#net4}
N -210 10 -210 30 {
lab=GND}
N -210 -60 -210 -50 {
lab=Vb}
N -130 10 -130 30 {
lab=GND}
N -130 -60 -130 -50 {
lab=Vc}
N -210 -90 -210 -60 {
lab=Vb}
N -130 -90 -130 -60 {
lab=Vc}
N 260 -60 290 -60 {
lab=#net2}
N 260 -160 260 -140 {
lab=Vc}
N 260 -80 260 -60 {
lab=#net2}
N 180 -60 180 -20 {
lab=#net4}
N 180 -160 180 -120 {
lab=Vb}
N 410 -60 470 -60 {
lab=#net3}
N 290 -60 350 -60 {
lab=#net2}
C {devices/code_shown.sym} -200 160 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib $::SG13G2_MODELS/cornerHBT.lib hbt_bcs
"}
C {devices/code_shown.sym} 670 -50 0 0 {name=NGSPICE only_toplevel=true 
value="
.param Rbase=50
.control 
save all
sp dec 500 1e8 1e12
*meas ac z11 FIND z_1_1 AT=1e10
let phiz = ph(z_1_1)
*meas ac pz11 FIND phiz AT=1e10
*let X = z11*cos(pz11)
*let Y = z11*sin(pz11)
*print X, Y
write sp_hbt_13g2_lna.raw
.endc
"


}
C {devices/gnd.sym} 260 100 0 0 {name=l1 lab=GND}
C {devices/gnd.sym} 0 100 0 0 {name=l2 lab=GND}
C {devices/vsource.sym} 470 10 0 0 {name=V4 value="dc 0 ac 0 portnum 2 z0 50"
}
C {devices/gnd.sym} 470 100 0 0 {name=l3 lab=GND}
C {devices/gnd.sym} 310 100 0 0 {name=l4 lab=GND}
C {devices/title.sym} -130 260 0 0 {name=l5 author="Copyright 2023 IHP PDK Authors"}
C {sg13g2_pr/npn13G2.sym} 240 10 0 0 {name=Q1
model=npn13G2
spiceprefix=X
Nx=1}
C {devices/lab_pin.sym} 260 -160 0 0 {name=p1 sig_type=std_logic lab=Vc}
C {devices/vsource.sym} 0 50 0 0 {name=V3 value="dc 0 ac 1 portnum 1 z0 50"}
C {devices/lab_pin.sym} 180 -160 0 0 {name=p2 sig_type=std_logic lab=Vb}
C {devices/gnd.sym} -210 30 0 0 {name=l6 lab=GND}
C {devices/vsource.sym} -210 -20 0 0 {name=V1 value=0.95}
C {devices/gnd.sym} -130 30 0 0 {name=l7 lab=GND}
C {devices/vsource.sym} -130 -20 0 0 {name=V2 value=1.7}
C {devices/lab_pin.sym} -210 -90 0 0 {name=p7 sig_type=std_logic lab=Vb}
C {devices/lab_pin.sym} -130 -90 0 0 {name=p8 sig_type=std_logic lab=Vc}
C {devices/capa.sym} 100 10 1 0 {name=C1
m=1
value=3p
footprint=1206
device="ceramic capacitor"}
C {devices/capa.sym} 380 -60 3 0 {name=C2
m=1
value=2p
footprint=1206
device="ceramic capacitor"}
C {devices/ind.sym} 180 -90 0 0 {name=L8
m=1
value=1500p
footprint=1206
device=inductor}
C {devices/ind.sym} 260 -110 0 0 {name=L9
m=1
value=3050p
footprint=1206
device=inductor}
C {devices/launcher.sym} -170 -170 0 0 {name=h5
descr="load waves" 
tclcommand="xschem raw_read $netlist_dir/sp_hbt_13g2_lna.raw ac"
}
