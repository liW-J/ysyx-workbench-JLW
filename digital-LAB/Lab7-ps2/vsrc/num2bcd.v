module num2bcd (
    input  wire [3:0]  i_bin,
    output wire [11:0] o_bcd
);

    wire [19:0] t_bcd_reg0;
    wire [19:0] t_bcd_reg1;
    wire [19:0] t_bcd_reg2;
    wire [19:0] t_bcd_reg3;
    wire [19:0] t_bcd_reg4;
    wire [19:0] t_bcd_reg5;
    wire [19:0] t_bcd_reg6;
    wire [19:0] t_bcd_reg7;
    wire [19:0] t_bcd_reg8;

    // 将输入的8位二进制转换成20位
    assign t_bcd_reg0 = { 16'b0000_0000_0000_0000, i_bin };
    // 第1次移位
    bcd_shift bcd_shift_inst0(
        .i_num(t_bcd_reg0),
        .o_num(t_bcd_reg1));
    // 第2次移位
    bcd_shift bcd_shift_inst1(
        .i_num(t_bcd_reg1),
        .o_num(t_bcd_reg2));
    // 第3次移位
    bcd_shift bcd_shift_inst2(
        .i_num(t_bcd_reg2),
        .o_num(t_bcd_reg3));
    // 第4次移位
    bcd_shift bcd_shift_inst3(
        .i_num(t_bcd_reg3),
        .o_num(t_bcd_reg4));
    // 第5次移位
    bcd_shift bcd_shift_inst4(
        .i_num(t_bcd_reg4),
        .o_num(t_bcd_reg5));
    // 第6次移位
    bcd_shift bcd_shift_inst5(
        .i_num(t_bcd_reg5),
        .o_num(t_bcd_reg6));
    // 第7次移位
    bcd_shift bcd_shift_inst6(
        .i_num(t_bcd_reg6),
        .o_num(t_bcd_reg7));
    // 第8次移位
    bcd_shift bcd_shift_inst7(
        .i_num(t_bcd_reg7),
        .o_num(t_bcd_reg8));
    // 输出BCD
    assign o_bcd = { t_bcd_reg8[19:8] };

endmodule

module bcd_shift(
    input  wire [19:0] i_num,
    output wire [19:0] o_num
);

    wire [3:0] reg1;
    wire [3:0] reg2;
    wire [3:0] reg3;

    bcd_cmp bcd_cmp_inst0(
        .i_cmp(i_num[19:16]),
        .o_cmp(reg1));
    bcd_cmp bcd_cmp_inst1(
        .i_cmp(i_num[15:12]),
        .o_cmp(reg2));
    bcd_cmp bcd_cmp_inst2(
        .i_cmp(i_num[11:8]),
        .o_cmp(reg3));
    // 比较完成，左移1位
    
    assign o_num = { reg1[2:0], reg2, reg3, i_num[7:0], 1'b0 };

endmodule

module bcd_cmp(
    input  wire [3:0] i_cmp,
    output reg  [3:0] o_cmp
);

    always @(*) begin
        // 大于4加3
        if (i_cmp > 4) begin
            o_cmp = i_cmp + 3;
        end
        // 小于等于4不处理
        else begin
            o_cmp = i_cmp;
        end
    end

endmodule