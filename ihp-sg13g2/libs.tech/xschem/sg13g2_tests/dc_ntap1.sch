v {xschem version=3.4.6 file_version=1.2}
G {}
K {}
V {}
S {}
E {}
B 2 180 -490 980 -90 {flags=graph

y2=0.032
ypos1=0
ypos2=2
divy=5
subdivy=1
unity=1
x1=0
x2=3
divx=5
subdivx=1

dataset=-1
unitx=1
logx=0
logy=0


y1=0
rainbow=0
color=4
node=i(Vr)}
T {Here GND is for simulation purpose. The actuall connection goes to NWELL} -150 110 0 0 0.2 0.2 {}
N -180 90 -180 100 {
lab=GND}
N -180 -60 -180 -20 {
lab=#net1}
N 0 -60 0 -20 {
lab=Vcc}
N -180 -60 -100 -60 {
lab=#net1}
N -40 -60 0 -60 {
lab=Vcc}
N 0 -60 50 -60 {
lab=Vcc}
N 0 40 0 90 {
lab=GND}
N -180 90 0 90 {
lab=GND}
N -180 40 -180 90 {
lab=GND}
C {devices/gnd.sym} -180 100 0 0 {name=l1 lab=GND}
C {devices/vsource.sym} 0 10 0 0 {name=Vres value=1.5}
C {devices/title.sym} -130 260 0 0 {name=l5 author="Copyright 2023 IHP PDK Authors"}
C {devices/lab_pin.sym} 50 -60 2 0 {name=p1 sig_type=std_logic lab=Vcc}
C {devices/ammeter.sym} -70 -60 1 0 {name=Vr}
C {simulator_commands_shown.sym} -200 -460 0 0 {name=Libs_Ngspice
simulator=ngspice
only_toplevel=false 
value="
.lib cornerRES.lib res_typ
"}
C {launcher.sym} -130 -140 0 0 {name=h3
descr=SimulateNGSPICE
tclcommand="
# Setup the default simulation commands if not already set up
# for example by already launched simulations.
set_sim_defaults
puts $sim(spice,1,cmd) 

# Change the Xyce command. In the spice category there are currently
# 5 commands (0, 1, 2, 3, 4). Command 3 is the Xyce batch
# you can get the number by querying $sim(spice,n)
set sim(spice,1,cmd) \{ngspice  \\"$N\\" -a\}

# change the simulator to be used (Xyce)
set sim(spice,default) 0

# run netlist and simulation
xschem netlist
simulate
"}
C {simulator_commands_shown.sym} -190 -360 0 0 {name=Simulator2
simulator=ngspice
only_toplevel=false 
value=".param temp=27
.control
save all 
op
print Vcc/I(Vr)
reset 
dc Vres 0 3 0.01 
write dc_ntap1.raw
.endc
"}
C {devices/launcher.sym} 230 -60 0 0 {name=h5
descr="load waves" 
tclcommand="xschem raw_read $netlist_dir/dc_ntap1.raw dc"
}
C {sg13g2_pr/ntap1.sym} -180 10 0 0 {name=R1
model=ntap1
spiceprefix=X
w=0.78e-6
l=0.78e-6
a=tcleval(}
