
module alu(
    input [2:0] command,    
    input [3:0] src1,
    input [3:0] src0,

    input clk,
    output reg [3:0] res,
    output reg overflow_flag
);

    reg [3:0] b = src0;
    reg [3:0] a = src0;


    //enum cmd_num
    parameter ADD = 3'b000;
    parameter SUB = 3'b001;
    parameter INV = 3'b010;
    parameter AND = 3'b011;
    parameter OR = 3'b100;
    parameter XOR = 3'b101;
    parameter SLT = 3'b110;
    parameter BEQ = 3'b111;

    always @(posedge clk) begin
        case (command)
            ADD:begin
                    {overflow_flag, res} = a + b;
            end
            SUB:begin
                    b = ~b + 1;
                    {overflow_flag, res} = a + b;
            end
            INV:begin
                    res = ~a;
            end
            AND:begin
                    res = a & b;
            end
            OR:begin
                    res = a | b;
            end
            XOR:begin
                    res = a ^ b;
            end
            SLT:begin
                if (a[3] == b[3]) begin		//判断符号位是否相等
                    if (a < b)  res = 1;	//符号位相等直接比大小
                        else  res = 0;
                end
                else begin					//符号位不相等直接比符号位
                    if ((a[3] == 0) && (b[3] == 1)) res = 0;
                    if ((a[3] == 1) && (b[3] == 0)) res = 1;
                end
            end
            BEQ:begin
                if (a == b)  res = 1;
                else  res = 0;
            end
        endcase
    end

endmodule