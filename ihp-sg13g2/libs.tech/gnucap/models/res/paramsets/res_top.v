// Verilog
// Libraries
// It works in analog domain, the model shoulr be changed to support logic 
verilog
load mgsim
load ./corner.so
load vams/vpulse.so



ground gnd;
module top (d1, d2, d3);
inout d1, d2, d3
electrical d1, d2, d3;


rsil #(.l(1u), .w(5u), .mm_ok(1)) r1(d1, d2, d3);
rsil #(.l(1u), .w(5u)) r2(d1, d2, d3);

endmodule

top #() mytop(n1,gnd,gnd);

vpulse #(0, 1.2, 0, 1n, 1n, 5u, 10u) V1 (n1, gnd);

print tran   v(*)
tran 0 10u 1n > tran1.txt trace off quiet
