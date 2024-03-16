import "DPI-C" context function void check_ebreak(input bit flag);

module Trap(
    input wire      clock,
    input wire      reset,
    input wire      isEbreak
);

  always @(isEbreak) begin
      check_ebreak(isEbreak);
  end

endmodule