// Verilog
// Libraries
verilog
load mgsim
load ./gates.so
load vams/vpulse.so

ground gnd;
anand xnand(nand, i1, i2);
dff1 xdff(q, qb ,clk, nand);


vpulse #(0, 1.2, 0, 1n, 1n, 5u, 10u) V1 (i1, gnd);
vpulse #(0, 1.2, 0, 1n, 1n, 3u, 10u) V2 (i2, gnd);
vpulse #(0, 1.2, 200n, 1n, 1n, 500n, 1u) Vclk (clk, gnd);

print tran   v(i1) v(i2) v(nand)  v(q) v(qb)
tran 0 10u 1n > tran1.txt trace off quiet
