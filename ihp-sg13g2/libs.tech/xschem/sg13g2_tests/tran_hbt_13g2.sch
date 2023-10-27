v {xschem version=3.4.4 file_version=1.2
}
G {}
K {}
V {}
S {}
E {}
B 2 540 -1170 1340 -770 {flags=graph
y1=-0.034
y2=0.036
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=0
x2=2e-06
divx=5
subdivx=4
xlabmag=1.0
ylabmag=1.0
node=vout
color=4
dataset=-1
unitx=1
logx=0
logy=0
}
B 2 -320 -1170 480 -770 {flags=graph
y1=0.79
y2=0.8
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=0
x2=2e-06
divx=5
subdivx=4
xlabmag=1.0
ylabmag=1.0
node=vb
color=4
dataset=-1
unitx=1
logx=0
logy=0
}
T {Nx - number of emitters} 390 -170 0 0 0.2 0.2 {}
N 410 -430 410 -370 {
lab=GND}
N 410 -530 410 -490 {
lab=Vc}
N 620 -530 620 -490 {
lab=#net1}
N 410 -460 460 -460 {
lab=GND}
N 460 -460 460 -370 {
lab=GND}
N 360 -460 370 -460 {
lab=Vb}
N 390 -530 410 -530 {
lab=Vc}
N 280 -460 360 -460 {
lab=Vb}
N 330 -490 330 -460 {
lab=Vb}
N 410 -360 410 -280 {
lab=GND}
N 410 -370 410 -360 {
lab=GND}
N 460 -370 460 -280 {
lab=GND}
N 620 -360 620 -280 {
lab=GND}
N 620 -490 620 -420 {
lab=#net1}
N 410 -610 410 -530 {
lab=Vc}
N 410 -610 440 -610 {
lab=Vc}
N 500 -610 620 -610 {
lab=#net1}
N 620 -610 620 -530 {
lab=#net1}
N 540 -340 540 -270 {
lab=GND}
N 410 -530 460 -530 {
lab=Vc}
N 520 -530 540 -530 {
lab=Vout}
N 540 -530 540 -400 {
lab=Vout}
N 540 -530 560 -530 {
lab=Vout}
N -90 -340 -90 -270 {
lab=GND}
N -90 -460 -90 -400 {
lab=#net2}
N 250 -360 250 -340 {
lab=#net3}
N 250 -460 280 -460 {
lab=Vb}
N 250 -460 250 -420 {
lab=Vb}
N 190 -460 250 -460 {
lab=Vb}
N 20 -460 130 -460 {
lab=#net4}
N -90 -460 -40 -460 {
lab=#net2}
C {devices/code_shown.sym} 100 -150 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
*.lib $::SG13G2_MODELS/cornerHBT.lib hbt_typ_stat
.lib $::SG13G2_MODELS/cornerHBT.lib hbt_typ
"}
C {devices/code_shown.sym} 700 -580 0 0 {name=NGSPICE only_toplevel=true 
value="
.param temp=27
.control 
save all
tran 1n 2u 
write tran_hbt_13g2.raw
.endc
"}
C {devices/title.sym} 170 -50 0 0 {name=l5 author="Copyright 2023 IHP PDK Authors"}
C {devices/launcher.sym} 270 -710 0 0 {name=h5
descr="load waves" 
tclcommand="xschem raw_read $netlist_dir/tran_hbt_13g2.raw tran"
}
C {devices/gnd.sym} 410 -280 0 0 {name=l1 lab=GND}
C {devices/gnd.sym} 250 -280 0 0 {name=l2 lab=GND}
C {devices/vsource.sym} 620 -390 0 0 {name=Vce value=2.2}
C {devices/gnd.sym} 620 -280 0 0 {name=l3 lab=GND}
C {devices/gnd.sym} 460 -280 0 0 {name=l4 lab=GND}
C {sg13g2_pr/npn13G2.sym} 390 -460 0 0 {name=Q1
model=npn13G2
spiceprefix=X
Nx=1}
C {devices/res.sym} 470 -610 1 0 {name=R1
value=12k
footprint=1206
device=resistor
m=1}
C {devices/lab_pin.sym} 390 -530 0 0 {name=p1 sig_type=std_logic lab=Vc}
C {devices/vsource.sym} -90 -370 0 0 {name=Vbe1 value="ac 1m sine(0, 1m, 10meg)"}
C {devices/res.sym} 250 -390 0 0 {name=R2
value=56k
footprint=1206
device=resistor
m=1}
C {devices/lab_pin.sym} 330 -490 0 0 {name=p2 sig_type=std_logic lab=Vb}
C {devices/vsource.sym} 250 -310 0 0 {name=Vbe value=0.8}
C {devices/res.sym} 540 -370 2 0 {name=R3
value=47k
footprint=1206
device=resistor
m=1}
C {devices/gnd.sym} 540 -270 0 0 {name=l6 lab=GND}
C {devices/capa.sym} 490 -530 1 0 {name=C1
m=1
value=10p
footprint=1206
device="ceramic capacitor"}
C {devices/lab_pin.sym} 560 -530 2 0 {name=p3 sig_type=std_logic lab=Vout}
C {devices/gnd.sym} -90 -270 0 0 {name=l7 lab=GND}
C {devices/capa.sym} 160 -460 1 0 {name=C2
m=1
value=10p
footprint=1206
device="ceramic capacitor"}
C {devices/res.sym} -10 -460 1 0 {name=R4
value=50
footprint=1206
device=resistor
m=1}
