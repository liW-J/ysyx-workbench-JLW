module addsub (
    input                   [ 3 : 0]        a, b,
    output                  [ 3 : 0]        out,
    output                  [ 0 : 0]        co
);

adder #(4) fa1(
    .a(a),
    .b(~b),
    .ci(1'B1),
    .s(out),
    .co(co)
);
endmodule
