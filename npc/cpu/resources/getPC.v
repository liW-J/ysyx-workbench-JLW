import "DPI-C" context function void get_pc(input int flag);

module GetPC(
    input wire        clock,
    input wire        reset,
    input wire [31:0] pc
);

  always @(*) begin
      get_pc(pc);
  end

endmodule