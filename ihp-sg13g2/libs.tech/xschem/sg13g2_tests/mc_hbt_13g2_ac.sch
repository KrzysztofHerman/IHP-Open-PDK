v {xschem version=3.4.4 file_version=1.2
}
G {}
K {}
V {}
S {}
E {}
B 2 130 -1050 930 -650 {flags=graph
y1=0.0017
y2=0.034
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=7
x2=11
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
y1=0.00088
y2=0.001
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=7
x2=11
divx=5
subdivx=8
xlabmag=1.0
ylabmag=1.0
node=vb
color=4
dataset=-1
unitx=1
logx=1
logy=0
}
T {Nx - number of emitters} 390 -170 0 0 0.2 0.2 {}
N 420 -380 420 -320 {
lab=GND}
N 420 -480 420 -440 {
lab=Vc}
N 630 -480 630 -440 {
lab=#net1}
N 420 -410 470 -410 {
lab=GND}
N 470 -410 470 -320 {
lab=GND}
N 370 -410 380 -410 {
lab=Vb}
N 400 -480 420 -480 {
lab=Vc}
N 290 -410 370 -410 {
lab=Vb}
N 340 -440 340 -410 {
lab=Vb}
N 420 -310 420 -230 {
lab=GND}
N 420 -320 420 -310 {
lab=GND}
N 470 -320 470 -230 {
lab=GND}
N 630 -310 630 -230 {
lab=GND}
N 630 -440 630 -370 {
lab=#net1}
N 420 -560 420 -480 {
lab=Vc}
N 420 -560 450 -560 {
lab=Vc}
N 510 -560 630 -560 {
lab=#net1}
N 630 -560 630 -480 {
lab=#net1}
N 550 -290 550 -220 {
lab=GND}
N 420 -480 470 -480 {
lab=Vc}
N 530 -480 550 -480 {
lab=Vout}
N 550 -480 550 -350 {
lab=Vout}
N 550 -480 570 -480 {
lab=Vout}
N -80 -290 -80 -220 {
lab=GND}
N -80 -410 -80 -350 {
lab=#net2}
N 260 -310 260 -290 {
lab=#net3}
N 260 -410 290 -410 {
lab=Vb}
N 260 -410 260 -370 {
lab=Vb}
N 200 -410 260 -410 {
lab=Vb}
N 30 -410 140 -410 {
lab=#net4}
N -80 -410 -30 -410 {
lab=#net2}
C {devices/code_shown.sym} 100 -150 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib $::SG13G2_MODELS/cornerHBT.lib hbt_wcs_stat
*.lib $::SG13G2_MODELS/cornerHBT.lib hbt_typ
"}
C {devices/code_shown.sym} 700 -580 0 0 {name=NGSPICE only_toplevel=true 
value="
.param temp=27
.param mc_ok = 1

.control 
let mc_runs = 1000
let run = 0
shell rm ../csv/mc_hbt_3dB.csv
***************** LOOP *********************
dowhile run < mc_runs
reset
set run=$&run
save all
ac dec 101 10meg 100000meg 
meas ac vnom_at FIND Vout AT=100meg 
let v3db = vnom_at*0.707
meas ac freq_3dB when Vc=v3db
print freq_3dB >> ../csv/mc_hbt_3dB.csv
let run=run+1 
end
***************** LOOP *********************
.endc
"}
C {devices/title.sym} 170 -50 0 0 {name=l5 author="Copyright 2023 IHP PDK Authors"}
C {devices/launcher.sym} 170 -580 0 0 {name=h5
descr="load waves" 
tclcommand="xschem raw_read $netlist_dir/ac_hbt_13g2.raw ac"
}
C {devices/gnd.sym} 420 -230 0 0 {name=l7 lab=GND}
C {devices/gnd.sym} 260 -230 0 0 {name=l8 lab=GND}
C {devices/vsource.sym} 630 -340 0 0 {name=Vce value=2.2}
C {devices/gnd.sym} 630 -230 0 0 {name=l9 lab=GND}
C {devices/gnd.sym} 470 -230 0 0 {name=l10 lab=GND}
C {sg13g2_pr/npn13G2.sym} 400 -410 0 0 {name=Q2
model=npn13G2
spiceprefix=X
Nx=1}
C {devices/res.sym} 480 -560 1 0 {name=R4
value=12k
footprint=1206
device=resistor
m=1}
C {devices/lab_pin.sym} 400 -480 0 0 {name=p4 sig_type=std_logic lab=Vc}
C {devices/vsource.sym} -80 -320 0 0 {name=Vin value="dc 0.0 ac 1m sine(0, 1m, 10meg)"}
C {devices/res.sym} 260 -340 0 0 {name=R5
value=56k
footprint=1206
device=resistor
m=1}
C {devices/lab_pin.sym} 340 -440 0 0 {name=p5 sig_type=std_logic lab=Vb}
C {devices/vsource.sym} 260 -260 0 0 {name=Vbe value=0.8}
C {devices/res.sym} 550 -320 2 0 {name=R6
value=47k
footprint=1206
device=resistor
m=1}
C {devices/gnd.sym} 550 -220 0 0 {name=l11 lab=GND}
C {devices/capa.sym} 500 -480 1 0 {name=C2
m=1
value=10p
footprint=1206
device="ceramic capacitor"}
C {devices/lab_pin.sym} 570 -480 2 0 {name=p6 sig_type=std_logic lab=Vout}
C {devices/gnd.sym} -80 -220 0 0 {name=l12 lab=GND}
C {devices/capa.sym} 170 -410 1 0 {name=C3
m=1
value=10p
footprint=1206
device="ceramic capacitor"}
C {devices/res.sym} 0 -410 1 0 {name=R7
value=50
footprint=1206
device=resistor
m=1}
