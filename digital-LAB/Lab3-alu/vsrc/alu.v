module alu (
    input                   [3 : 0]        src0, src1,
    input                   [11 : 0]        sel,
    output                  [3 : 0]        res
);
    wire [3:0] adder_out;
    wire co;

    Adder #(4) fa1(
        .a(src0),
        .b(src1),
        .ci(0),
        .s(adder_out),
        .co(co)
    );

    assign res = ({32{sel[0]}} & adder_out) | ...;

endmodule
