module top (
    input clk,
    input rst,
    input [8:0] sw,
    
    output [3:0] ledr,
    output reg [6:0] seg0
);



encode83 my_encode83(
    .x(sw[7:0]),
    .en(sw[8]),
    .y(ledr[2:0]),
    .flag(ledr[3])
);



bcd7seg seg({01'b0,ledr[2:0]},seg0);

endmodule
