module shifter(
    input  clk,
    input  wire [7:0] i_num,
    output reg  [7:0] o_num
);
    parameter CLK_NUM = 4000000;

    reg [31:0] count = 32'h0;
    reg new_bit   = 1'b0;

    initial begin
        o_num = i_num;
    end

    assign new_bit = o_num[4] ^ o_num[3] ^ o_num[2] ^ o_num[0];

    always @(posedge clk) begin
        if (count == CLK_NUM) begin
            count <=32'h0;
            o_num <= { new_bit, o_num[7:1] };
        end
        else begin
            count <= count + 1;
        end
    end

endmodule