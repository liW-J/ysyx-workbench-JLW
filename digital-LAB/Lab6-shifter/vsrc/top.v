module top(
    input   clk,
    input   rst,
    output reg  [7:0] ledr
);

    shifter shifter_inst0(
        .clk(clk),
        .rst(rst),
        .i_num(8'b0000_0001),
        .o_num(ledr));

endmodule
