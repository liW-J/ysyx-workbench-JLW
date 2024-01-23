module shifter(
    input clk,
    input rst,
    input  wire [7:0] i_num,
    output reg  [7:0] o_num
);
    parameter CLK_NUM = 4000000;

    reg [31:0] count = 32'b0;
    reg new_bit   = 1'b0;

    initial begin
        o_num = i_num;
    end

    assign new_bit = o_num[4] ^ o_num[3] ^ o_num[2] ^ o_num[0];

    always @(posedge clk) begin
    if (rst) begin o_num <= i_num; count <= 0; end
    else begin
      if (count == 0) o_num <= { new_bit, o_num[7:1] };
      count <= (count >= 5000000 ? 32'b0 : count + 1);
      end
    end

endmodule