module InstSRAM(
  input  wire        clock,
  input  wire        reset,
  input  wire [31:0] pc,
  output reg  [31:0] inst
);

  always @(pc) begin
    if(pc != 0) begin
      inst = paddr_read(pc, 4);
    end
  end

endmodule