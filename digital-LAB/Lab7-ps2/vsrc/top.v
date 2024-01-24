module top(
    input  clk,
    input  clrn,
    input  ps2_clk,
    input  ps2_data,

    output reg  [1:0] ledr,
    output reg  [6:0] seg0,
    output reg  [6:0] seg1,
    output reg  [6:0] seg2,
    output reg  [6:0] seg3,
    output reg  [6:0] seg4,
    output reg  [6:0] seg5
);

    reg [7:0] kbd_data  = 8'b0;
    reg [3:0] kbd_count = 4'b0;

    ps2_keyboard my_ps2_keyboard(
        .clk(clk),
        .clrn(clrn),
        .ps2_clk(ps2_clk),
        .ps2_data(ps2_data),
        .nextdata_n(1'b0),
        .data(kbd_data),
        .ready(ledr[0]),
        .overflow(ledr[1]),
        .kbd_count(kbd_count));

    bcd7seg ps2_seg0(
        .b(kbd_data[3:0]),
        .h(seg0));
    bcd7seg ps2_seg1(
        .b(kbd_data[7:4]),
        .h(seg1));

    reg [7:0] ps2_ascii = 8'b0;

    ps2_lut ps2_keyboard_lut_inst0(
        .key(kbd_data),
        .value(ps2_ascii));

    bcd7seg ps2_seg2(
        .b(ps2_ascii[3:0]),
        .h(seg2));
    bcd7seg ps2_seg3(
        .b(ps2_ascii[7:4]),
        .h(seg3));

    reg [11:0] temp_bcd = 12'b0;
    reg [19:0] i_b = { 16'b0000_0000_0000_0000, kbd_count };

    //show count
    num2bcd bcd_inst0(
        .i_b(i_b),
        .o_bcd(temp_bcd));

    bcd7seg ps2_seg4(
        .b(temp_bcd[3:0]),
        .h(seg4));
    bcd7seg ps2_seg5(
        .b(temp_bcd[7:4]),
        .h(seg5));

endmodule