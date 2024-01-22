module top(a,s,y);
  input  [7:0] a;
  input  [1:0] s;
  output [1:0] y;
  MuxKeyWithDefault #(4, 2, 2) i0 (y, s, 2'b0, {
    2'b00, a[1:0],
    2'b01, a[3:2],
    2'b10, a[5:4],
    2'b11, a[7:6]
  });

endmodule




