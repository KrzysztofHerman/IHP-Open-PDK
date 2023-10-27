v {xschem version=3.4.4 file_version=1.2
}
G {}
K {}
V {}
S {}
E {}
B 2 130 -1050 930 -650 {flags=graph
y1=0.00039
y2=0.034
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=7
x2=12
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0
node=vout
color=4
dataset=-1
unitx=1
logx=1
logy=0
}
B 2 -730 -1050 70 -650 {flags=graph
y1=0.065
y2=31
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=7
x2=12
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0
node=av
color=4
dataset=-1
unitx=1
logx=1
logy=0
}
T {Nx - number of emitters} 390 -170 0 0 0.2 0.2 {}
N 430 -360 430 -300 {
lab=GND}
N 430 -460 430 -420 {
lab=Vc}
N 640 -460 640 -420 {
lab=#net1}
N 430 -390 480 -390 {
lab=GND}
N 480 -390 480 -300 {
lab=GND}
N 380 -390 390 -390 {
lab=Vb}
N 410 -460 430 -460 {
lab=Vc}
N 300 -390 380 -390 {
lab=Vb}
N 350 -420 350 -390 {
lab=Vb}
N 430 -290 430 -210 {
lab=GND}
N 430 -300 430 -290 {
lab=GND}
N 480 -300 480 -210 {
lab=GND}
N 640 -290 640 -210 {
lab=GND}
N 640 -420 640 -350 {
lab=#net1}
N 430 -540 430 -460 {
lab=Vc}
N 430 -540 460 -540 {
lab=Vc}
N 520 -540 640 -540 {
lab=#net1}
N 640 -540 640 -460 {
lab=#net1}
N 560 -270 560 -200 {
lab=GND}
N 430 -460 480 -460 {
lab=Vc}
N 540 -460 560 -460 {
lab=Vout}
N 560 -460 560 -330 {
lab=Vout}
N 560 -460 580 -460 {
lab=Vout}
N -70 -270 -70 -200 {
lab=GND}
N -70 -390 -70 -330 {
lab=Vinp}
N 270 -290 270 -270 {
lab=#net2}
N 270 -390 300 -390 {
lab=Vb}
N 270 -390 270 -350 {
lab=Vb}
N 210 -390 270 -390 {
lab=Vb}
N 40 -390 150 -390 {
lab=#net3}
N -70 -390 -20 -390 {
lab=Vinp}
N -70 -430 -70 -390 {
lab=Vinp}
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
op
print Vc Vb I(Vce)
ac dec 100 10meg 100e10 
meas ac vnom_at FIND Vout AT=100meg 
let v3db = vnom_at*0.707
let Av = 20*log10(abs(Vout/Vinp))
meas ac freq_at when Vc=v3db
write ac_hbt_13g2.raw
.endc
"}
C {devices/gnd.sym} 430 -210 0 0 {name=l1 lab=GND}
C {devices/gnd.sym} 270 -210 0 0 {name=l2 lab=GND}
C {devices/vsource.sym} 640 -320 0 0 {name=Vce value=2.2}
C {devices/gnd.sym} 640 -210 0 0 {name=l3 lab=GND}
C {devices/gnd.sym} 480 -210 0 0 {name=l4 lab=GND}
C {devices/title.sym} 170 -50 0 0 {name=l5 author="Copyright 2023 IHP PDK Authors"}
C {sg13g2_pr/npn13G2.sym} 410 -390 0 0 {name=Q1
model=npn13G2
spiceprefix=X
Nx=1}
C {devices/res.sym} 490 -540 1 0 {name=R1
value=12k
footprint=1206
device=resistor
m=1}
C {devices/lab_pin.sym} 410 -460 0 0 {name=p1 sig_type=std_logic lab=Vc}
C {devices/vsource.sym} -70 -300 0 0 {name=Vin value="dc 0.0 ac 1m sine(0, 1m, 10meg)"}
C {devices/res.sym} 270 -320 0 0 {name=R2
value=56k
footprint=1206
device=resistor
m=1}
C {devices/lab_pin.sym} 350 -420 0 0 {name=p2 sig_type=std_logic lab=Vb}
C {devices/launcher.sym} 140 -630 0 0 {name=h5
descr="load waves" 
tclcommand="xschem raw_read $netlist_dir/ac_hbt_13g2.raw ac"
}
C {devices/vsource.sym} 270 -240 0 0 {name=Vbe value=0.8}
C {devices/res.sym} 560 -300 2 0 {name=R3
value=47k
footprint=1206
device=resistor
m=1}
C {devices/gnd.sym} 560 -200 0 0 {name=l6 lab=GND}
C {devices/capa.sym} 510 -460 1 0 {name=C1
m=1
value=10p
footprint=1206
device="ceramic capacitor"}
C {devices/lab_pin.sym} 580 -460 2 0 {name=p3 sig_type=std_logic lab=Vout}
C {devices/gnd.sym} -70 -200 0 0 {name=l7 lab=GND}
C {devices/capa.sym} 180 -390 1 0 {name=C2
m=1
value=10p
footprint=1206
device="ceramic capacitor"}
C {devices/res.sym} 10 -390 1 0 {name=R4
value=50
footprint=1206
device=resistor
m=1}
C {devices/lab_pin.sym} -70 -430 0 0 {name=p4 sig_type=std_logic lab=Vinp}
