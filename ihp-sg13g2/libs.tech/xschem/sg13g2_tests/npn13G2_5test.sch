v {xschem version=3.4.5 file_version=1.2
}
G {}
K {}
V {}
S {}
E {}
N 50 50 50 80 {
lab=GND}
N 20 50 20 80 {
lab=GND}
N 70 0 140 0 {
lab=#temp}
N 140 70 140 80 {
lab=GND}
N 140 0 140 10 {
lab=#net1}
N -130 -0 -40 0 {
lab=#base}
N -130 -0 -130 10 {
lab=#net2}
N -130 70 -130 80 {
lab=GND}
N -180 -40 -180 -30 {
lab=GND}
N -180 -110 -180 -100 {
lab=#net3}
N -180 -110 20 -110 {
lab=#net3}
N 20 -110 20 -50 {
lab=#col}
C {sg13g2_pr/npn13G2_5t.sym} 0 0 0 0 {name=Q1
model=npn13G2_5t
spiceprefix=X
Nx=1
le=900e-9}
C {gnd.sym} 20 80 0 0 {name=l1 lab=GND}
C {gnd.sym} 50 80 0 0 {name=l2 lab=GND}
C {res.sym} 140 40 0 0 {name=R1
value=1k
footprint=1206
device=resistor
m=1}
C {gnd.sym} 140 80 0 0 {name=l3 lab=GND}
C {res.sym} -130 40 0 0 {name=R2
value=1k
footprint=1206
device=resistor
m=1}
C {gnd.sym} -130 80 0 0 {name=l4 lab=GND}
C {res.sym} -180 -70 0 0 {name=R3
value=1k
footprint=1206
device=resistor
m=1}
C {gnd.sym} -180 -30 0 0 {name=l5 lab=GND}
