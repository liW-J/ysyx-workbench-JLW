module top(
    input  wire [0:0] clk,
    input  wire [0:0] clrn,
    input  wire [0:0] ps2_clk,
    input  wire [0:0] ps2_data,
    output reg  [0:0] ready,
    output reg  [0:0] overflow,
    output reg  [6:0] seg0,
    output reg  [6:0] seg1,
    output reg  [6:0] seg2,
    output reg  [6:0] seg3,
    output reg  [6:0] seg4,
    output reg  [6:0] seg5
);

    reg [7:0] t_ps2_data  = 8'b0;
    reg [3:0] t_ps2_count = 4'b0;

    ps2_keyboard my_ps2_keyboard(
        .clk(clk),
        .clrn(clrn),
        .ps2_clk(ps2_clk),
        .ps2_data(ps2_data),
        .nextdata_n(1'b0),
        .data(t_ps2_data),
        .ready(ready),
        .overflow(overflow),
        .count(t_ps2_count));

    bcd7seg ps2_seg0(
        .b(t_ps2_data[3:0]),
        .h(seg0));
    bcd7seg ps2_seg1(
        .b(t_ps2_data[7:4]),
        .h(seg1));

    reg [7:0] t_ps2_ascii = 8'b0;

    ps2_lut ps2_keyboard_lut_inst0(
        .key(t_ps2_data),
        .value(t_ps2_ascii));

    bcd7seg ps2_seg2(
        .b(t_ps2_ascii[3:0]),
        .h(seg2));
    bcd7seg ps2_seg3(
        .b(t_ps2_ascii[7:4]),
        .h(seg3));

    reg [11:0] t_bcd = 12'b0;

    num2bcd bcd_inst0(
        .i_bin(t_ps2_count),
        .o_bcd(t_bcd));

    bcd7seg ps2_seg4(
        .b(t_bcd[3:0]),
        .h(seg4));
    bcd7seg ps2_seg5(
        .b(t_bcd[7:4]),
        .h(seg5));

endmodule