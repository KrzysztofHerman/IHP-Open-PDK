v {xschem version=3.4.5 file_version=1.2
}
G {}
K {}
V {}
S {}
E {}
T {equal voltage drop as on Iref} 680 -220 0 0 0.2 0.2 {}
N 630 -80 630 -20 {
lab=GND}
N 630 -110 680 -110 {
lab=GND}
N 680 -110 680 -20 {
lab=GND}
N 630 -180 630 -140 {
lab=#net1}
N 370 -110 370 -20 {
lab=GND}
N 370 -110 420 -110 {
lab=GND}
N 420 -80 420 -20 {
lab=GND}
N 520 -110 590 -110 {
lab=#net2}
N 420 -250 420 -220 {
lab=vc}
N 420 -160 420 -140 {
lab=#net2}
N 270 -110 270 -20 {
lab=GND}
N 270 -250 270 -170 {
lab=vc}
N 270 -250 420 -250 {
lab=vc}
N 260 -260 270 -260 {
lab=vc}
N 270 -260 270 -250 {
lab=vc}
N 420 -310 490 -310 {
lab=vc}
N 420 -310 420 -250 {
lab=vc}
N 550 -310 630 -310 {
lab=#net3}
N 630 -310 630 -240 {
lab=#net3}
N 420 -160 520 -160 {
lab=#net2}
N 520 -160 520 -110 {
lab=#net2}
N 460 -110 520 -110 {
lab=#net2}
N 520 -190 590 -190 {
lab=#net2}
N 520 -190 520 -160 {
lab=#net2}
N 590 -250 590 -230 {
lab=vc}
N 420 -250 590 -250 {
lab=vc}
C {devices/code_shown.sym} 260 110 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.lib cornerMOSlv.lib mos_tt_stat

"}
C {devices/code_shown.sym} -300 -440 0 0 {name=NGSPICE only_toplevel=true 
value="
.param mm_ok=1
.param mc_ok=0
.param temp=27

.control

let mc_runs = 100
let run = 0
set curplot=new
set scratch=$curplot
setplot $scratch
let vg=unitvec(mc_runs)

***************** LOOP *********************
dowhile run < mc_runs

*dc Vds 0 3 0.01
op
set run=$&run
set dt=$curplot
setplot $scratch
let out\{$run\}=\{$dt\}.I(Vm)
let Vg[run]=\{$dt\}.I(Vm)
setplot $dt
reset
let run=run+1 
end
***************** LOOP *********************

wrdata sg13_lv_nmos_cs_mm.csv \{$scratch\}.vg
write sg13_lv_nmos_cs.raw
echo
print \{$scratch\}.vg

.endc
"}
C {devices/gnd.sym} 630 -20 0 0 {name=l1 lab=GND}
C {devices/gnd.sym} 680 -20 0 0 {name=l4 lab=GND}
C {devices/title.sym} -130 260 0 0 {name=l5 author="Copyright 2023 IHP PDK Authors"}
C {devices/isource.sym} 420 -190 0 0 {name=Iref value=10n}
C {sg13g2_pr/sg13_lv_nmos.sym} 610 -110 2 1 {name=M1
l=0.130u
w=0.130u
ng=1
m=1
model=sg13_lv_nmos
spiceprefix=X
}
C {sg13g2_pr/sg13_lv_nmos.sym} 440 -110 2 0 {name=M2
l=0.130u
w=0.130u
ng=1
m=1
model=sg13_lv_nmos
spiceprefix=X
}
C {devices/gnd.sym} 370 -20 0 0 {name=l3 lab=GND}
C {devices/gnd.sym} 420 -20 0 0 {name=l6 lab=GND}
C {devices/vcvs.sym} 630 -210 0 0 {name=E1 value=1.0}
C {devices/ammeter.sym} 520 -310 1 0 {name=Vm savecurrent=true spice_ignore=0}
C {devices/vsource.sym} 270 -140 0 0 {name=V1 value=1 savecurrent=false}
C {devices/lab_pin.sym} 260 -260 0 0 {name=p1 sig_type=std_logic lab=vc}
C {devices/gnd.sym} 270 -20 0 0 {name=l7 lab=GND}
