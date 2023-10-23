v {xschem version=3.4.4 file_version=1.2
}
G {}
K {}
V {}
S {}
E {}
B 2 60 -1080 860 -680 {flags=graph
y1=9.7e-09
y2=0.024
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=8
x2=12
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
B 2 -790 -1090 10 -690 {flags=graph
y1=0.55
y2=1
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=8
x2=12
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
B 2 920 -1080 1720 -680 {flags=graph
y1=0.033
y2=1.6
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=8
x2=12
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
B 2 -800 -1530 0 -1130 {flags=graph
y1=3
y2=52000
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=8
x2=12
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
B 2 90 -1530 890 -1130 {flags=graph
y1=0.84
y2=4.9
ypos1=0
ypos2=2
divy=5
subdivy=8
unity=1
x1=8
x2=12
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
N 800 -240 800 -180 {
lab=GND}
N 260 -60 260 -20 {
lab=#net2}
N 800 -340 800 -300 {
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
N -450 -230 -450 -210 {
lab=GND}
N -450 -300 -450 -290 {
lab=Vb2}
N -370 -230 -370 -210 {
lab=GND}
N -370 -300 -370 -290 {
lab=Vc}
N -450 -330 -450 -300 {
lab=Vb2}
N -370 -330 -370 -300 {
lab=Vc}
N 260 -80 260 -60 {
lab=#net2}
N 180 -60 180 -20 {
lab=#net4}
N 740 -340 800 -340 {
lab=#net3}
N -300 -230 -300 -210 {
lab=GND}
N -300 -300 -300 -290 {
lab=Vb1}
N -300 -330 -300 -300 {
lab=Vb1}
N 120 -120 180 -120 {
lab=#net5}
N 30 -120 60 -120 {
lab=Vb1}
N 260 -290 300 -290 {
lab=GND}
N 300 -290 300 -250 {
lab=GND}
N 260 -260 260 -90 {
lab=#net2}
N 260 -90 260 -80 {
lab=#net2}
N 140 -290 220 -290 {
lab=#net6}
N 140 -300 140 -290 {
lab=#net6}
N 140 -400 140 -360 {
lab=Vb2}
N 580 -180 610 -180 {
lab=Vc}
N 490 -180 520 -180 {
lab=#net7}
N 490 -220 490 -180 {
lab=#net7}
N 260 -340 260 -320 {
lab=#net8}
N 540 -340 680 -340 {
lab=#net9}
N 490 -340 490 -280 {
lab=#net9}
N 490 -80 490 -60 {
lab=GND}
N 490 -180 490 -140 {
lab=#net7}
N 140 -230 140 -210 {
lab=GND}
N 130 -60 130 -40 {
lab=GND}
N 400 -340 540 -340 {
lab=#net9}
N 270 -340 340 -340 {
lab=#net8}
N 260 -340 270 -340 {
lab=#net8}
C {devices/code_shown.sym} -200 160 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib $::SG13G2_MODELS/cornerHBT.lib hbt_bcs
"}
C {devices/code_shown.sym} 1400 -360 0 0 {name=NGSPICE only_toplevel=true 
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
print I(Vmeas)
write sp_hbt_13g2_lna.raw
.endc
"


}
C {devices/gnd.sym} 260 100 0 0 {name=l1 lab=GND}
C {devices/gnd.sym} 0 100 0 0 {name=l2 lab=GND}
C {devices/vsource.sym} 800 -270 0 0 {name=V4 value="dc 0 ac 0 portnum 2 z0 50"
}
C {devices/gnd.sym} 800 -180 0 0 {name=l3 lab=GND}
C {devices/gnd.sym} 310 100 0 0 {name=l4 lab=GND}
C {devices/title.sym} -130 260 0 0 {name=l5 author="Copyright 2023 IHP PDK Authors"}
C {sg13g2_pr/npn13G2.sym} 240 10 0 0 {name=Q1
model=npn13G2
spiceprefix=X
Nx=1}
C {devices/lab_pin.sym} 610 -180 2 0 {name=p1 sig_type=std_logic lab=Vc}
C {devices/vsource.sym} 0 50 0 0 {name=V3 value="dc 0 ac 1 portnum 1 z0 50"}
C {devices/lab_pin.sym} 30 -120 0 0 {name=p2 sig_type=std_logic lab=Vb1}
C {devices/gnd.sym} -450 -210 0 0 {name=l6 lab=GND}
C {devices/vsource.sym} -450 -260 0 0 {name=V1 value=0.95}
C {devices/gnd.sym} -370 -210 0 0 {name=l7 lab=GND}
C {devices/vsource.sym} -370 -260 0 0 {name=V2 value=1.7}
C {devices/lab_pin.sym} -450 -330 0 0 {name=p7 sig_type=std_logic lab=Vb2}
C {devices/lab_pin.sym} -370 -330 0 0 {name=p8 sig_type=std_logic lab=Vc}
C {devices/capa.sym} 100 10 1 0 {name=C1
m=1
value=27p
footprint=1206
device="ceramic capacitor"}
C {devices/capa.sym} 710 -340 3 0 {name=C2
m=1
value=27p
footprint=1206
device="ceramic capacitor"}
C {devices/ind.sym} 180 -90 0 0 {name=L8
m=1
value=10n
footprint=1206
device=inductor}
C {devices/ind.sym} 490 -250 0 0 {name=L9
m=1
value=10n
footprint=1206
device=inductor}
C {devices/launcher.sym} -170 -640 0 0 {name=h5
descr="load waves" 
tclcommand="xschem raw_read $netlist_dir/sp_hbt_13g2_lna.raw ac"
}
C {devices/gnd.sym} -300 -210 0 0 {name=l10 lab=GND}
C {devices/vsource.sym} -300 -260 0 0 {name=V5 value=0.45}
C {devices/lab_pin.sym} -300 -330 0 0 {name=p3 sig_type=std_logic lab=Vb1}
C {devices/res.sym} 90 -120 1 0 {name=R1
value=50
footprint=1206
device=resistor
m=1}
C {sg13g2_pr/npn13G2.sym} 240 -290 0 0 {name=Q2
model=npn13G2
spiceprefix=X
Nx=1}
C {devices/gnd.sym} 300 -250 0 0 {name=l11 lab=GND}
C {devices/res.sym} 140 -330 2 0 {name=R2
value=500k
footprint=1206
device=resistor
m=1}
C {devices/lab_pin.sym} 140 -400 0 0 {name=p4 sig_type=std_logic lab=Vb2}
C {devices/res.sym} 550 -180 1 0 {name=R3
value=20
footprint=1206
device=resistor
m=1}
C {devices/capa.sym} 490 -110 0 0 {name=C3
m=1
value=30p
footprint=1206
device="ceramic capacitor"}
C {devices/gnd.sym} 490 -60 0 0 {name=l12 lab=GND}
C {devices/capa.sym} 140 -260 0 0 {name=C4
m=1
value=30p
footprint=1206
device="ceramic capacitor"}
C {devices/gnd.sym} 140 -210 0 0 {name=l13 lab=GND}
C {devices/capa.sym} 130 -90 0 0 {name=C5
m=1
value=30p
footprint=1206
device="ceramic capacitor"}
C {devices/gnd.sym} 130 -40 0 0 {name=l14 lab=GND}
C {devices/ammeter.sym} 370 -340 1 0 {name=Vmeas}
