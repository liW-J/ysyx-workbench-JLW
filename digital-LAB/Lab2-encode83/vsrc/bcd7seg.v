module bcd7seg(
  input  [3:0] b,
  output reg [6:0] h
);

always@(b)begin
    case(b)        

    4'd0:begin h<=7'b00_00001;end
    4'd1:begin h<=7'b100_1111;end
    4'd2:begin h<=7'b001_0010;end
    4'd3:begin h<=7'b000_0110;end
    4'd4:begin h<=7'b100_1100;end
    4'd5:begin h<=7'b010_0100;end
    4'd6:begin h<=7'b010_0000;end
    4'd7:begin h<=7'b000_1111;end
    4'd8:begin h<=7'b000_0000;end
  
    default:begin h<=7'b000_0001;end
    endcase
end


endmodule
