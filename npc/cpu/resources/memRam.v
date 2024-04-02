import "DPI-C" context function int paddr_read(input int addr, input int len);
import "DPI-C" context function void paddr_write(input int addr, input int len, input int data);

module MemRam(
  input  wire        clock,
  input  wire        reset,
  input  wire        isLoad,
  input  wire        isStore,
  input  wire [31:0] addr,
  input  wire [31:0] len,
  input  wire [31:0] wdata,
  input  wire [31:0] pc,
  output reg  [31:0] rdata,
  output reg  [31:0] inst
);

  reg load_flag ;
  reg store_flag ;

  always @(pc) begin
    if(pc != 0) begin
      inst = paddr_read(pc, 4);
    end
  end

  always @(inst) begin
    load_flag = isLoad;
    store_flag = isStore;
    if (load_flag) begin
      rdata = paddr_read(addr, len);
      load_flag = 0;
    end
    else begin
      rdata = addr;
    end
    if (store_flag) begin
      paddr_write(addr, len, wdata);
      store_flag = 0;
    end
  end

endmodule