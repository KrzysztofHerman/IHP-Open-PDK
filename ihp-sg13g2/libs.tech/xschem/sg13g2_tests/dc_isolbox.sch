v {xschem version=3.4.5 file_version=1.2
}
G {}
K {}
V {}
S {}
E {}
B 2 0 -800 800 -400 {flags=graph
y1=-3e-06
y2=2.3e-06
ypos1=0
ypos2=2
divy=5
subdivy=4
unity=1
x1=-12
x2=1
divx=5
subdivx=4
xlabmag=1.0
ylabmag=1.0


dataset=-1
unitx=1
logx=0
logy=0
color="7 8"
node="i(Vmdp)
i(Vmda)"}
N -510 -210 -510 -190 {
lab=GND}
N -350 -210 -350 -190 {
lab=GND}
N -510 -350 -510 -270 {
lab=isosub}
N -510 -350 -350 -350 {
lab=isosub}
N -350 -350 -350 -330 {
lab=isosub}
N -350 -270 -270 -270 {
lab=nwell}
N -350 -350 -270 -350 {
lab=isosub}
N -270 -270 -270 -250 {
lab=nwell}
C {devices/gnd.sym} -510 -190 0 0 {name=l2 lab=GND}
C {devices/code_shown.sym} -570 -740 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.include diodes.lib
"}
C {devices/code_shown.sym} -560 -630 0 0 {name=NGSPICE only_toplevel=true 
value="
.param temp=27
.control
save all 
op
print I(Vmda) I(Vmdp) 
reset 
dc V1 -12 1 1m
write dc_isolbox.raw
.endc
"}
C {devices/title.sym} -360 130 0 0 {name=l5 author="Copyright 2023 IHP PDK Authors"}
C {devices/launcher.sym} 70 -360 0 0 {name=h5
descr="Load IV curve" 
tclcommand="xschem raw_read $netlist_dir/dc_isolbox.raw dc"
}
C {isource.sym} -510 -240 2 0 {name=I0 value=1m}
C {devices/gnd.sym} -350 -190 0 0 {name=l1 lab=GND}
C {lab_pin.sym} -270 -350 2 0 {name=p1 sig_type=std_logic lab=isosub}
C {lab_pin.sym} -270 -270 2 0 {name=p2 sig_type=std_logic lab=nwell}
C {capa.sym} -270 -220 0 0 {name=C1
m=1
value=1p
footprint=1206
device="ceramic capacitor"}
C {devices/gnd.sym} -270 -190 0 0 {name=l3 lab=GND}
C {sg13g2_pr/isolbox.sym} -350 -270 0 0 {name=D1
model=isolbox
l=3.0u
w=3.0u
spiceprefix=X
}
