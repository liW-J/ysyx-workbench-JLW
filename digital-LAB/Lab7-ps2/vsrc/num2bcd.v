module num2bcd (
    input  wire [19:0]  i_b,
    output wire [11:0] o_bcd
);

    wire [19:0] reg0;
    wire [19:0] reg1;
    wire [19:0] reg2;
    wire [19:0] reg3;
    wire [19:0] reg4;
    wire [19:0] reg5;
    wire [19:0] reg6;
    wire [19:0] reg7;
    wire [19:0] reg8;

    assign reg0 = i_b;

    bcd_shift bcd_shift_inst0(
        .i_num(reg0),
        .o_num(reg1));
  
    bcd_shift bcd_shift1(
        .i_num(reg1),
        .o_num(reg2));

    bcd_shift bcd_shift2(
        .i_num(reg2),
        .o_num(reg3));
   
    bcd_shift bcd_shift3(
        .i_num(reg3),
        .o_num(reg4));

    bcd_shift bcd_shift4(
        .i_num(reg4),
        .o_num(reg5));
 
    bcd_shift bcd_shift5(
        .i_num(reg5),
        .o_num(reg6));
   
    bcd_shift bcd_shift6(
        .i_num(reg6),
        .o_num(reg7));
   
    bcd_shift bcd_shift7(
        .i_num(reg7),
        .o_num(reg8));

    assign o_bcd = { reg8[19:8] };

endmodule

module bcd_shift(
    input  wire [19:0] i_num,
    output wire [19:0] o_num
);

    wire [3:0] reg1;
    wire [3:0] reg2;
    wire [3:0] reg3;

    bcd_cmp bcd_cmp0(
        .i_num(i_num[19:16]),
        .o_num(reg1));
    bcd_cmp bcd_cmp1(
        .i_num(i_num[15:12]),
        .o_num(reg2));
    bcd_cmp bcd_cmp2(
        .i_num(i_num[11:8]),
        .o_num(reg3));
    
    assign o_num = { reg1[2:0], reg2, reg3, i_num[7:0], 1'b0 };

endmodule

module bcd_cmp(
    input  wire [3:0] i_num,
    output reg  [3:0] o_num
);

    always @(*) begin
        // 大于4加3
        if (i_num > 4) begin
            o_num = i_num + 3;
        end
        // 小于等于4不处理
        else begin
            o_num = i_num;
        end
    end

endmodule