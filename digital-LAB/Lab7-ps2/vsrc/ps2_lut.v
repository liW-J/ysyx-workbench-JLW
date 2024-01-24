module ps2_lut(
    input  wire [7:0] key,
    output reg  [7:0] value
);

    always @(*) begin
        case (key)
            8'h1c:   value = 8'h61; // a
            8'h32:   value = 8'h62; // b
            8'h21:   value = 8'h63; // c
            8'h23:   value = 8'h64; // d
            8'h24:   value = 8'h65; // e
            8'h2b:   value = 8'h66; // f
            8'h34:   value = 8'h67; // g
            8'h33:   value = 8'h68; // h
            8'h43:   value = 8'h69; // i
            8'h3b:   value = 8'h6a; // j
            8'h42:   value = 8'h6b; // k
            8'h4b:   value = 8'h6c; // l
            8'h3a:   value = 8'h6d; // m
            8'h31:   value = 8'h6e; // n
            8'h44:   value = 8'h6f; // o
            8'h4d:   value = 8'h70; // p
            8'h15:   value = 8'h71; // q
            8'h2d:   value = 8'h72; // r
            8'h1b:   value = 8'h73; // s
            8'h2c:   value = 8'h74; // t
            8'h3c:   value = 8'h75; // u
            8'h2a:   value = 8'h76; // v
            8'h1d:   value = 8'h77; // w
            8'h22:   value = 8'h78; // x
            8'h35:   value = 8'h79; // y
            8'h1a:   value = 8'h7a; // z
            8'h45:   value = 8'h30; // 0
            8'h16:   value = 8'h31; // 1
            8'h1e:   value = 8'h32; // 2
            8'h26:   value = 8'h33; // 3
            8'h25:   value = 8'h34; // 4
            8'h2e:   value = 8'h35; // 5
            8'h36:   value = 8'h36; // 6
            8'h3d:   value = 8'h37; // 7
            8'h3e:   value = 8'h38; // 8
            8'h46:   value = 8'h39; // 9
            default: value = 8'h00;
        endcase
    end

endmodule