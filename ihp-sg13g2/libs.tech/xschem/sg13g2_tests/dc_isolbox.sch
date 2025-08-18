v {xschem version=3.4.6 file_version=1.2}
G {}
K {}
V {}
S {}
E {}
B 2 -110 -410 690 -10 {flags=graph
y1=-16
y2=16
ypos1=0
ypos2=2
divy=1
subdivy=4
unity=1
x1=-0.001
x2=0.001
divx=1
subdivx=4
xlabmag=1.0
ylabmag=1.0


dataset=-1
unitx=1
logx=0
logy=0

color="4 6"
node="nwell_net

isosub_net"
hilight_wave=0}
N -500 30 -500 50 {
lab=GND}
N -340 30 -340 50 {
lab=GND}
N -500 -110 -500 -30 {
lab=isosub_net}
N -500 -110 -340 -110 {
lab=isosub_net}
N -340 -110 -340 -90 {
lab=isosub_net}
N -340 -30 -260 -30 {
lab=nwell_net}
N -340 -110 -260 -110 {
lab=isosub_net}
N -260 -30 -260 -10 {
lab=nwell_net}
C {devices/gnd.sym} -500 50 0 0 {name=l2 lab=GND}
C {devices/code_shown.sym} -580 -490 0 0 {name=MODEL only_toplevel=true
format="tcleval( @value )"
value="
.include diodes.lib
"}
C {devices/code_shown.sym} -580 -390 0 0 {name=NGSPICE only_toplevel=true 
value="
.param temp=27
.control
save all 

dc I0 -1m 1m 1u
echo Evaluating breakdown voltages:
meas dc vbk_pos find v(isosub_net) at=1u
meas dc vbk_neg find v(isosub_net) at=-1u
write dc_isolbox.raw
wrdata isolbox.csv nwell_net isosub_net
.endc
"}
C {devices/title.sym} -360 130 0 0 {name=l5 author="Copyright 2023 IHP PDK Authors"}
C {devices/launcher.sym} -30 30 0 0 {name=h5
descr="Load IV curve" 
tclcommand="xschem raw_read $netlist_dir/dc_isolbox.raw dc"
}
C {isource.sym} -500 0 2 0 {name=I0 value=1m}
C {devices/gnd.sym} -340 50 0 0 {name=l1 lab=GND}
C {lab_pin.sym} -260 -110 2 0 {name=p1 sig_type=std_logic lab=isosub_net}
C {lab_pin.sym} -260 -30 2 0 {name=p2 sig_type=std_logic lab=nwell_net}
C {sg13g2_pr/isolbox.sym} -340 -30 0 0 {name=D1
model=isolbox
l=3.0u
w=3.0u
spiceprefix=X
}
C {noconn.sym} -260 -10 3 0 {name=l3}
