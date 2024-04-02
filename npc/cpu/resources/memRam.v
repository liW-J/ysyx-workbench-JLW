import "DPI-C" context function int pmem_read(input int addr, input int len);
import "DPI-C" context function void pmem_write(input int addr, input int len, input int data);

module MemRam(
  input  wire        clock,
  input  wire        reset,
  input  wire        isLoad,
  input  wire        isStore,
  input  wire [31:0] addr,
  input  wire [31:0] len,
  input  wire [31:0] wdata,
  output reg  [31:0] rdata
);

  always @(clock) begin
    if (isLoad) begin
      rdata = pmem_read(addr, len);
    end
    else begin
      rdata = addr;
    end
  end

  always @(clock) begin
    if (isStore) begin
      pmem_write(addr, len, wdata);
    end
  end

endmodule