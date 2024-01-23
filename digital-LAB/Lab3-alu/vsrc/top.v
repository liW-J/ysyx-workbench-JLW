module top(
    input clk,
    input [10:0] sw,

    output reg [4:0] ledr
);

alu my_alu(    
    .clk(clk),
    .command(sw[10:8]),
    .src1(sw[7:4]),
    .src0(sw[3:0]),

    .res(ledr[3:0]),
    .overflow_flag(ledr[4])
);

endmodule

