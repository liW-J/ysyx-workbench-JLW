module adder (
    input   [3:0]   a, b,
    input   [0:0]   cin,
    output  [3:0]   s,
    output  [0:0]   cout
);
wire [2:0] temp_cin;

adder_1b add0 (
    .a      (a[0]),
    .b      (b[0]),
    .cin    (cin),
    .s      (s[0]),
    .cout   (temp_cin[0])
);

adder_1b add1 (
    .a      (a[1]),
    .b      (b[1]),
    .cin    (temp_cin[0]),
    .s      (s[1]),
    .cout   (temp_cin[1])
);

adder_1b add2 (
    .a      (a[2]),
    .b      (b[2]),
    .cin    (temp_cin[1]),
    .s      (s[2]),
    .cout   (temp_cin[2])
);

adder_1b add3 (
    .a      (a[3]),
    .b      (b[3]),
    .cin    (temp_cin[2]),
    .s      (s[3]),
    .cout   (cout)
);
endmodule


module adder_1b (
    input   [0:0]   a, b, cin,
    output  [0:0]   s, cout
);

wire temp_s, temp_c_1, temp_c_2;

half_adder ha1(
    .a(a),
    .b(b),
    .s(temp_s),
    .c(temp_c_1)
);

half_adder ha2(
    .a(temp_s),
    .b(cin),
    .s(s),
    .c(temp_c_2)
);

half_adder ha3(
    .a(temp_c_1),
    .b(temp_c_2),
    .s(cout),
    .c()
);

endmodule

module half_adder(
    input           a, b, 
    output          s, c
);
    assign s = a ^ b;
    assign c = a & b;
endmodule
