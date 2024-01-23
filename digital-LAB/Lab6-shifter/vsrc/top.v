module top(
    input  clk,
    output reg  [7:0] ledr
);

    shifter shifter_inst0(
        .clk(clk),
        .i_num(8'b0000_0001),
        .o_num(ledr));

endmodule
