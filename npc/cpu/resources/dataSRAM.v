import "DPI-C" context function int paddr_read(input int addr, input int len);
import "DPI-C" context function void paddr_write(input int addr, input int len, input int data);

module DataSRAM(
  input  wire        isLoad,
  input  wire        isStore,
  input  wire [31:0] addr,
  input  wire [31:0] len,
  input  wire [31:0] wdata,
  output reg  [31:0] res
);

  reg load_flag ;
  reg store_flag ;

  always @(isLoad or isStore or addr) begin
    load_flag = isLoad;
    store_flag = isStore;
    if (load_flag) begin
      res = paddr_read(addr, len);
      load_flag = 0;
    end
    else begin
      res = addr;
    end
    if (store_flag) begin
      paddr_write(addr, len, wdata);
      store_flag = 0;
    end
  end

endmodule