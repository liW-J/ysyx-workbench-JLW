module encode83(x,en,y,flag);
  input  [7:0] x;
  input  en;
  output reg [2:0] y;
  output reg flag;

  integer i;
  always @(x or en) begin
    if (en) begin
      y = 0;
      for( i = 0; i <= 7; i = i+1)
          if(x[i] == 1)  begin
            y = i[2:0];
            flag = 1;
            end
    end
    else  begin
        y = 0;flag = 0;end
  end
endmodule