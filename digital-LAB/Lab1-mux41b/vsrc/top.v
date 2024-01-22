module top (
    input clk,
    input rst,
    input [9:0] sw,
    
    output [1:0] ledr
);


mux41b my_mux41b(
    .a(sw[9:2]),
    .s(sw[1:0]),
    .y(ledr)
);


endmodule


