// Generated by CIRCT firtool-1.44.0
// Standard header to adapt well known macros to our needs.
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_REG_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_REG_INIT
`endif // not def RANDOMIZE
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_MEM_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_MEM_INIT
`endif // not def RANDOMIZE

// RANDOM may be set to an expression that produces a 32-bit random unsigned value.
`ifndef RANDOM
  `define RANDOM $random
`endif // not def RANDOM

// Users can define 'PRINTF_COND' to add an extra gate to prints.
`ifndef PRINTF_COND_
  `ifdef PRINTF_COND
    `define PRINTF_COND_ (`PRINTF_COND)
  `else  // PRINTF_COND
    `define PRINTF_COND_ 1
  `endif // PRINTF_COND
`endif // not def PRINTF_COND_

// Users can define INIT_RANDOM as general code that gets injected into the
// initializer block for modules with registers.
`ifndef INIT_RANDOM
  `define INIT_RANDOM
`endif // not def INIT_RANDOM

// If using random initialization, you can also define RANDOMIZE_DELAY to
// customize the delay used, otherwise 0.002 is used.
`ifndef RANDOMIZE_DELAY
  `define RANDOMIZE_DELAY 0.002
`endif // not def RANDOMIZE_DELAY

// Define INIT_RANDOM_PROLOG_ for use in our modules below.
`ifndef INIT_RANDOM_PROLOG_
  `ifdef RANDOMIZE
    `ifdef VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM
    `else  // VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM #`RANDOMIZE_DELAY begin end
    `endif // VERILATOR
  `else  // RANDOMIZE
    `define INIT_RANDOM_PROLOG_
  `endif // RANDOMIZE
`endif // not def INIT_RANDOM_PROLOG_

// Include register initializers in init blocks unless synthesis is set
`ifndef SYNTHESIS
  `ifndef ENABLE_INITIAL_REG_
    `define ENABLE_INITIAL_REG_
  `endif // not def ENABLE_INITIAL_REG_
`endif // not def SYNTHESIS

// Include rmemory initializers in init blocks unless synthesis is set
`ifndef SYNTHESIS
  `ifndef ENABLE_INITIAL_MEM_
    `define ENABLE_INITIAL_MEM_
  `endif // not def ENABLE_INITIAL_MEM_
`endif // not def SYNTHESIS

// VCS coverage exclude_file
module regs_combMem(	// @[cpu/src/unit/GPRFile.scala:23:17]
  input  [4:0]  R0_addr,
  input         R0_en,
                R0_clk,
  input  [4:0]  R1_addr,
  input         R1_en,
                R1_clk,
  input  [4:0]  W0_addr,
  input         W0_en,
                W0_clk,
  input  [31:0] W0_data,
  output [31:0] R0_data,
                R1_data
);

  reg [31:0] Memory[0:31];	// @[cpu/src/unit/GPRFile.scala:23:17]
  always @(posedge W0_clk) begin	// @[cpu/src/unit/GPRFile.scala:23:17]
    if (W0_en)	// @[cpu/src/unit/GPRFile.scala:23:17]
      Memory[W0_addr] <= W0_data;	// @[cpu/src/unit/GPRFile.scala:23:17]
  end // always @(posedge)
  `ifdef ENABLE_INITIAL_MEM_	// @[cpu/src/unit/GPRFile.scala:23:17]
    reg [31:0] _RANDOM_MEM;	// @[cpu/src/unit/GPRFile.scala:23:17]
    initial begin	// @[cpu/src/unit/GPRFile.scala:23:17]
      `INIT_RANDOM_PROLOG_	// @[cpu/src/unit/GPRFile.scala:23:17]
      `ifdef RANDOMIZE_MEM_INIT	// @[cpu/src/unit/GPRFile.scala:23:17]
        for (logic [5:0] i = 6'h0; i < 6'h20; i += 6'h1) begin
          _RANDOM_MEM = `RANDOM;	// @[cpu/src/unit/GPRFile.scala:23:17]
          Memory[i[4:0]] = _RANDOM_MEM;	// @[cpu/src/unit/GPRFile.scala:23:17]
        end	// @[cpu/src/unit/GPRFile.scala:23:17]
      `endif // RANDOMIZE_MEM_INIT
    end // initial
  `endif // ENABLE_INITIAL_MEM_
  assign R0_data = R0_en ? Memory[R0_addr] : 32'bx;	// @[cpu/src/unit/GPRFile.scala:23:17]
  assign R1_data = R1_en ? Memory[R1_addr] : 32'bx;	// @[cpu/src/unit/GPRFile.scala:23:17]
endmodule

module PCRegister(	// @[<stdin>:3:10]
  input         clock,	// @[<stdin>:4:11]
                reset,	// @[<stdin>:5:11]
  output [31:0] io_pc	// @[cpu/src/unit/PCRegister.scala:25:14]
);

  reg [31:0] pcReg;	// @[cpu/src/unit/PCRegister.scala:27:22]
  always @(posedge clock) begin	// @[<stdin>:4:11]
    if (reset)	// @[<stdin>:4:11]
      pcReg <= 32'h80000000;	// @[cpu/src/unit/PCRegister.scala:27:22]
    else	// @[<stdin>:4:11]
      pcReg <= pcReg + 32'h4;	// @[cpu/src/unit/PCRegister.scala:27:22, :32:20]
  end // always @(posedge)
  `ifdef ENABLE_INITIAL_REG_	// @[<stdin>:3:10]
    `ifdef FIRRTL_BEFORE_INITIAL	// @[<stdin>:3:10]
      `FIRRTL_BEFORE_INITIAL	// @[<stdin>:3:10]
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:0];	// @[<stdin>:3:10]
    initial begin	// @[<stdin>:3:10]
      `ifdef INIT_RANDOM_PROLOG_	// @[<stdin>:3:10]
        `INIT_RANDOM_PROLOG_	// @[<stdin>:3:10]
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT	// @[<stdin>:3:10]
        _RANDOM[/*Zero width*/ 1'b0] = `RANDOM;	// @[<stdin>:3:10]
        pcReg = _RANDOM[/*Zero width*/ 1'b0];	// @[<stdin>:3:10, cpu/src/unit/PCRegister.scala:27:22]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// @[<stdin>:3:10]
      `FIRRTL_AFTER_INITIAL	// @[<stdin>:3:10]
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  assign io_pc = pcReg;	// @[<stdin>:3:10, cpu/src/unit/PCRegister.scala:27:22]
endmodule

module ID(	// @[<stdin>:20:10]
  input         clock,	// @[<stdin>:21:11]
                reset,	// @[<stdin>:22:11]
  input  [31:0] io_inst,	// @[cpu/src/stage/ID.scala:31:14]
  output        io_BundleControl_isALUSrc,	// @[cpu/src/stage/ID.scala:31:14]
                io_BundleControl_isJAL,	// @[cpu/src/stage/ID.scala:31:14]
  output [3:0]  io_BundleControl_exeType,	// @[cpu/src/stage/ID.scala:31:14]
  output [4:0]  io_bundleReg_rs1,	// @[cpu/src/stage/ID.scala:31:14]
                io_bundleReg_rs2,	// @[cpu/src/stage/ID.scala:31:14]
                io_bundleReg_rd,	// @[cpu/src/stage/ID.scala:31:14]
  output [31:0] io_imm,	// @[cpu/src/stage/ID.scala:31:14]
  output        io_writeEnable	// @[cpu/src/stage/ID.scala:31:14]
);

  wire _GEN = io_inst[6:2] == 5'h1C;	// @[cpu/src/stage/ID.scala:47:20, :49:18]
  wire _GEN_0 = io_inst[6:2] == 5'h4;	// @[cpu/src/stage/ID.scala:47:20, :49:18]
  wire _GEN_1 = io_inst[6:2] == 5'h5;	// @[cpu/src/stage/ID.scala:47:20, :49:18]
  `ifndef SYNTHESIS	// @[cpu/src/stage/ID.scala:51:13]
    always @(posedge clock) begin	// @[cpu/src/stage/ID.scala:51:13]
      if ((`PRINTF_COND_) & _GEN & ~reset)	// @[cpu/src/stage/ID.scala:49:18, :51:13]
        $fwrite(32'h80000002, "ebreak");	// @[cpu/src/stage/ID.scala:51:13]
      if ((`PRINTF_COND_) & ~_GEN & _GEN_0 & ~reset)	// @[cpu/src/stage/ID.scala:49:18, :51:13, :54:13]
        $fwrite(32'h80000002, "addi\n");	// @[cpu/src/stage/ID.scala:51:13, :54:13]
      if ((`PRINTF_COND_) & ~_GEN & ~_GEN_0 & _GEN_1 & ~reset)	// @[cpu/src/stage/ID.scala:49:18, :51:13, :61:13]
        $fwrite(32'h80000002, "auipc\n");	// @[cpu/src/stage/ID.scala:51:13, :61:13]
    end // always @(posedge)
  `endif // not def SYNTHESIS
  wire writeEnable = ~_GEN & (_GEN_0 | _GEN_1);	// @[cpu/src/stage/ID.scala:40:94, :49:18, :55:16]
  assign io_BundleControl_isALUSrc = writeEnable;	// @[<stdin>:20:10, cpu/src/stage/ID.scala:40:94, :49:18]
  assign io_BundleControl_isJAL = ~(_GEN | _GEN_0) & _GEN_1;	// @[<stdin>:20:10, cpu/src/stage/ID.scala:40:94, :49:18]
  assign io_BundleControl_exeType = _GEN ? 4'h0 : {3'h0, _GEN_0 | _GEN_1};	// @[<stdin>:20:10, cpu/src/stage/ID.scala:44:28, :49:18, :56:16, :64:16]
  assign io_bundleReg_rs1 = io_inst[19:15];	// @[<stdin>:20:10, cpu/src/stage/ID.scala:33:30]
  assign io_bundleReg_rs2 = io_inst[24:20];	// @[<stdin>:20:10, cpu/src/stage/ID.scala:34:30]
  assign io_bundleReg_rd = io_inst[11:7];	// @[<stdin>:20:10, cpu/src/stage/ID.scala:35:30]
  assign io_imm =
    _GEN
      ? 32'h0
      : _GEN_0
          ? {{20{io_inst[31]}}, io_inst[31:20]}
          : _GEN_1 ? {io_inst[31:12], 12'h0} : 32'h0;	// @[<stdin>:20:10, cpu/src/stage/ID.scala:45:28, :49:18, :58:16, :66:16, cpu/src/utils/DecodeUtils.scala:11:{32,37,43,51}, :12:{32,34,48}]
  assign io_writeEnable = writeEnable;	// @[<stdin>:20:10, cpu/src/stage/ID.scala:40:94, :49:18]
endmodule

module GPRFile(	// @[<stdin>:106:10]
  input         clock,	// @[<stdin>:107:11]
                io_writeEnable,	// @[cpu/src/unit/GPRFile.scala:20:14]
  input  [31:0] io_dataWrite,	// @[cpu/src/unit/GPRFile.scala:20:14]
  input  [4:0]  io_bundleReg_rs1,	// @[cpu/src/unit/GPRFile.scala:20:14]
                io_bundleReg_rs2,	// @[cpu/src/unit/GPRFile.scala:20:14]
                io_bundleReg_rd,	// @[cpu/src/unit/GPRFile.scala:20:14]
  output [31:0] io_dataRead1,	// @[cpu/src/unit/GPRFile.scala:20:14]
                io_dataRead2	// @[cpu/src/unit/GPRFile.scala:20:14]
);

  regs_combMem regs_ext (	// @[cpu/src/unit/GPRFile.scala:23:17]
    .R0_addr (io_bundleReg_rs1),
    .R0_en   (1'h1),	// @[<stdin>:106:10, cpu/src/unit/GPRFile.scala:23:17, :35:22, :37:29]
    .R0_clk  (clock),
    .R1_addr (io_bundleReg_rs2),
    .R1_en   (1'h1),	// @[<stdin>:106:10, cpu/src/unit/GPRFile.scala:23:17, :35:22, :37:29]
    .R1_clk  (clock),
    .W0_addr (io_bundleReg_rd),
    .W0_en   (io_writeEnable & (|io_bundleReg_rd)),	// @[cpu/src/unit/GPRFile.scala:34:{23,42}]
    .W0_clk  (clock),
    .W0_data (io_dataWrite),
    .R0_data (io_dataRead1),
    .R1_data (io_dataRead2)
  );
endmodule

module EX(	// @[<stdin>:136:10]
  input         clock,	// @[<stdin>:137:11]
                reset,	// @[<stdin>:138:11]
                io_bundleEXControl_isALUSrc,	// @[cpu/src/stage/EX.scala:33:16]
                io_bundleEXControl_isJAL,	// @[cpu/src/stage/EX.scala:33:16]
  input  [4:0]  io_bundleEXControl_exeType,	// @[cpu/src/stage/EX.scala:33:16]
  input  [31:0] io_dataRead1,	// @[cpu/src/stage/EX.scala:33:16]
                io_dataRead2,	// @[cpu/src/stage/EX.scala:33:16]
                io_imm,	// @[cpu/src/stage/EX.scala:33:16]
                io_pc,	// @[cpu/src/stage/EX.scala:33:16]
  output [31:0] io_res,	// @[cpu/src/stage/EX.scala:33:16]
                io_src1,	// @[cpu/src/stage/EX.scala:33:16]
                io_src2	// @[cpu/src/stage/EX.scala:33:16]
);

  wire [31:0] src1 = io_bundleEXControl_isJAL ? io_pc : io_dataRead1;	// @[cpu/src/stage/EX.scala:41:16]
  wire [31:0] src2 = io_bundleEXControl_isALUSrc ? io_imm : io_dataRead2;	// @[cpu/src/stage/EX.scala:42:16]
  wire [31:0] res = io_bundleEXControl_exeType == 5'h1 ? src1 + src2 : 32'h0;	// @[cpu/src/stage/EX.scala:37:26, :41:16, :42:16, :52:40, :54:{17,25}]
  `ifndef SYNTHESIS	// @[cpu/src/stage/EX.scala:45:11]
    always @(posedge clock) begin	// @[cpu/src/stage/EX.scala:45:11]
      if ((`PRINTF_COND_) & ~reset) begin	// @[cpu/src/stage/EX.scala:45:11, :58:11]
        $fwrite(32'h80000002, "jal=%d\n", io_bundleEXControl_isJAL);	// @[cpu/src/stage/EX.scala:45:11]
        $fwrite(32'h80000002, "ALUsrc=%d\n", io_bundleEXControl_isALUSrc);	// @[cpu/src/stage/EX.scala:45:11, :46:11]
        $fwrite(32'h80000002, "src111=%x\n", src1);	// @[cpu/src/stage/EX.scala:41:16, :45:11, :47:11]
        $fwrite(32'h80000002, "src222=%x\n", src2);	// @[cpu/src/stage/EX.scala:42:16, :45:11, :48:11]
        $fwrite(32'h80000002, "pcccccc=%x\n", io_pc);	// @[cpu/src/stage/EX.scala:45:11, :49:11]
        $fwrite(32'h80000002, "res=%x\n", res);	// @[cpu/src/stage/EX.scala:37:26, :45:11, :52:40, :54:17, :58:11]
      end
    end // always @(posedge)
  `endif // not def SYNTHESIS
  assign io_res = res;	// @[<stdin>:136:10, cpu/src/stage/EX.scala:37:26, :52:40, :54:17]
  assign io_src1 = src1;	// @[<stdin>:136:10, cpu/src/stage/EX.scala:41:16]
  assign io_src2 = src2;	// @[<stdin>:136:10, cpu/src/stage/EX.scala:42:16]
endmodule

module Controller(	// @[<stdin>:188:10]
  input        io_bundleControlIn_isALUSrc,	// @[cpu/src/Controller.scala:15:16]
               io_bundleControlIn_isJAL,	// @[cpu/src/Controller.scala:15:16]
  input  [3:0] io_bundleControlIn_exeType,	// @[cpu/src/Controller.scala:15:16]
  output       io_bundleEXControl_isALUSrc,	// @[cpu/src/Controller.scala:15:16]
               io_bundleEXControl_isJAL,	// @[cpu/src/Controller.scala:15:16]
  output [4:0] io_bundleEXControl_exeType	// @[cpu/src/Controller.scala:15:16]
);

  assign io_bundleEXControl_isALUSrc = io_bundleControlIn_isALUSrc;	// @[<stdin>:188:10]
  assign io_bundleEXControl_isJAL = io_bundleControlIn_isJAL;	// @[<stdin>:188:10]
  assign io_bundleEXControl_exeType = {1'h0, io_bundleControlIn_exeType};	// @[<stdin>:188:10, cpu/src/Controller.scala:21:32]
endmodule

module TOP(	// @[<stdin>:204:10]
  input         clock,	// @[<stdin>:205:11]
                reset,	// @[<stdin>:206:11]
  input  [31:0] io_inst,	// @[cpu/src/TOP.scala:31:14]
                io_res,	// @[cpu/src/TOP.scala:31:14]
  output [31:0] io_pc,	// @[cpu/src/TOP.scala:31:14]
  output        io_bundleControl_isALUSrc,	// @[cpu/src/TOP.scala:31:14]
                io_bundleControl_isJump,	// @[cpu/src/TOP.scala:31:14]
                io_bundleControl_isBranch,	// @[cpu/src/TOP.scala:31:14]
                io_bundleControl_isJAL,	// @[cpu/src/TOP.scala:31:14]
                io_bundleControl_isLoad,	// @[cpu/src/TOP.scala:31:14]
                io_bundleControl_isStore,	// @[cpu/src/TOP.scala:31:14]
                io_bundleControl_isSigned,	// @[cpu/src/TOP.scala:31:14]
  output [1:0]  io_bundleControl_lsType,	// @[cpu/src/TOP.scala:31:14]
  output [3:0]  io_bundleControl_exeType,	// @[cpu/src/TOP.scala:31:14]
  output        io_bundleDataControl_isLoad,	// @[cpu/src/TOP.scala:31:14]
                io_bundleDataControl_isStore,	// @[cpu/src/TOP.scala:31:14]
                io_bundleDataControl_isSigned,	// @[cpu/src/TOP.scala:31:14]
  output [1:0]  io_bundleDataControl_lsType,	// @[cpu/src/TOP.scala:31:14]
  output [31:0] io_resEX,	// @[cpu/src/TOP.scala:31:14]
                io_src1,	// @[cpu/src/TOP.scala:31:14]
                io_src2,	// @[cpu/src/TOP.scala:31:14]
  output [4:0]  io_rs1,	// @[cpu/src/TOP.scala:31:14]
                io_rs2,	// @[cpu/src/TOP.scala:31:14]
                io_rd,	// @[cpu/src/TOP.scala:31:14]
  output [31:0] io_imm,	// @[cpu/src/TOP.scala:31:14]
  output        io_resBranch	// @[cpu/src/TOP.scala:31:14]
);

  wire        _controller_io_bundleEXControl_isALUSrc;	// @[cpu/src/TOP.scala:37:26]
  wire        _controller_io_bundleEXControl_isJAL;	// @[cpu/src/TOP.scala:37:26]
  wire [4:0]  _controller_io_bundleEXControl_exeType;	// @[cpu/src/TOP.scala:37:26]
  wire [31:0] _gprFile_io_dataRead1;	// @[cpu/src/TOP.scala:35:26]
  wire [31:0] _gprFile_io_dataRead2;	// @[cpu/src/TOP.scala:35:26]
  wire        _id_io_BundleControl_isALUSrc;	// @[cpu/src/TOP.scala:34:26]
  wire        _id_io_BundleControl_isJAL;	// @[cpu/src/TOP.scala:34:26]
  wire [3:0]  _id_io_BundleControl_exeType;	// @[cpu/src/TOP.scala:34:26]
  wire [4:0]  _id_io_bundleReg_rs1;	// @[cpu/src/TOP.scala:34:26]
  wire [4:0]  _id_io_bundleReg_rs2;	// @[cpu/src/TOP.scala:34:26]
  wire [4:0]  _id_io_bundleReg_rd;	// @[cpu/src/TOP.scala:34:26]
  wire [31:0] _id_io_imm;	// @[cpu/src/TOP.scala:34:26]
  wire        _id_io_writeEnable;	// @[cpu/src/TOP.scala:34:26]
  wire [31:0] _pcReg_io_pc;	// @[cpu/src/TOP.scala:33:26]
  PCRegister pcReg (	// @[cpu/src/TOP.scala:33:26]
    .clock (clock),
    .reset (reset),
    .io_pc (_pcReg_io_pc)
  );
  ID id (	// @[cpu/src/TOP.scala:34:26]
    .clock                     (clock),
    .reset                     (reset),
    .io_inst                   (io_inst),
    .io_BundleControl_isALUSrc (_id_io_BundleControl_isALUSrc),
    .io_BundleControl_isJAL    (_id_io_BundleControl_isJAL),
    .io_BundleControl_exeType  (_id_io_BundleControl_exeType),
    .io_bundleReg_rs1          (_id_io_bundleReg_rs1),
    .io_bundleReg_rs2          (_id_io_bundleReg_rs2),
    .io_bundleReg_rd           (_id_io_bundleReg_rd),
    .io_imm                    (_id_io_imm),
    .io_writeEnable            (_id_io_writeEnable)
  );
  GPRFile gprFile (	// @[cpu/src/TOP.scala:35:26]
    .clock            (clock),
    .io_writeEnable   (_id_io_writeEnable),	// @[cpu/src/TOP.scala:34:26]
    .io_dataWrite     (io_res),
    .io_bundleReg_rs1 (_id_io_bundleReg_rs1),	// @[cpu/src/TOP.scala:34:26]
    .io_bundleReg_rs2 (_id_io_bundleReg_rs2),	// @[cpu/src/TOP.scala:34:26]
    .io_bundleReg_rd  (_id_io_bundleReg_rd),	// @[cpu/src/TOP.scala:34:26]
    .io_dataRead1     (_gprFile_io_dataRead1),
    .io_dataRead2     (_gprFile_io_dataRead2)
  );
  EX ex (	// @[cpu/src/TOP.scala:36:26]
    .clock                       (clock),
    .reset                       (reset),
    .io_bundleEXControl_isALUSrc (_controller_io_bundleEXControl_isALUSrc),	// @[cpu/src/TOP.scala:37:26]
    .io_bundleEXControl_isJAL    (_controller_io_bundleEXControl_isJAL),	// @[cpu/src/TOP.scala:37:26]
    .io_bundleEXControl_exeType  (_controller_io_bundleEXControl_exeType),	// @[cpu/src/TOP.scala:37:26]
    .io_dataRead1                (_gprFile_io_dataRead1),	// @[cpu/src/TOP.scala:35:26]
    .io_dataRead2                (_gprFile_io_dataRead2),	// @[cpu/src/TOP.scala:35:26]
    .io_imm                      (_id_io_imm),	// @[cpu/src/TOP.scala:34:26]
    .io_pc                       (_pcReg_io_pc),	// @[cpu/src/TOP.scala:33:26]
    .io_res                      (io_resEX),
    .io_src1                     (io_src1),
    .io_src2                     (io_src2)
  );
  Controller controller (	// @[cpu/src/TOP.scala:37:26]
    .io_bundleControlIn_isALUSrc (_id_io_BundleControl_isALUSrc),	// @[cpu/src/TOP.scala:34:26]
    .io_bundleControlIn_isJAL    (_id_io_BundleControl_isJAL),	// @[cpu/src/TOP.scala:34:26]
    .io_bundleControlIn_exeType  (_id_io_BundleControl_exeType),	// @[cpu/src/TOP.scala:34:26]
    .io_bundleEXControl_isALUSrc (_controller_io_bundleEXControl_isALUSrc),
    .io_bundleEXControl_isJAL    (_controller_io_bundleEXControl_isJAL),
    .io_bundleEXControl_exeType  (_controller_io_bundleEXControl_exeType)
  );
  assign io_pc = _pcReg_io_pc;	// @[<stdin>:204:10, cpu/src/TOP.scala:33:26]
  assign io_bundleControl_isALUSrc = _id_io_BundleControl_isALUSrc;	// @[<stdin>:204:10, cpu/src/TOP.scala:34:26]
  assign io_bundleControl_isJump = 1'h0;	// @[<stdin>:204:10, cpu/src/TOP.scala:33:26, :34:26, :35:26, :36:26, :37:26]
  assign io_bundleControl_isBranch = 1'h0;	// @[<stdin>:204:10, cpu/src/TOP.scala:33:26, :34:26, :35:26, :36:26, :37:26]
  assign io_bundleControl_isJAL = _id_io_BundleControl_isJAL;	// @[<stdin>:204:10, cpu/src/TOP.scala:34:26]
  assign io_bundleControl_isLoad = 1'h0;	// @[<stdin>:204:10, cpu/src/TOP.scala:33:26, :34:26, :35:26, :36:26, :37:26]
  assign io_bundleControl_isStore = 1'h0;	// @[<stdin>:204:10, cpu/src/TOP.scala:33:26, :34:26, :35:26, :36:26, :37:26]
  assign io_bundleControl_isSigned = 1'h0;	// @[<stdin>:204:10, cpu/src/TOP.scala:33:26, :34:26, :35:26, :36:26, :37:26]
  assign io_bundleControl_lsType = 2'h0;	// @[<stdin>:204:10, cpu/src/TOP.scala:34:26, :37:26]
  assign io_bundleControl_exeType = _id_io_BundleControl_exeType;	// @[<stdin>:204:10, cpu/src/TOP.scala:34:26]
  assign io_bundleDataControl_isLoad = 1'h0;	// @[<stdin>:204:10, cpu/src/TOP.scala:33:26, :34:26, :35:26, :36:26, :37:26]
  assign io_bundleDataControl_isStore = 1'h0;	// @[<stdin>:204:10, cpu/src/TOP.scala:33:26, :34:26, :35:26, :36:26, :37:26]
  assign io_bundleDataControl_isSigned = 1'h0;	// @[<stdin>:204:10, cpu/src/TOP.scala:33:26, :34:26, :35:26, :36:26, :37:26]
  assign io_bundleDataControl_lsType = 2'h0;	// @[<stdin>:204:10, cpu/src/TOP.scala:34:26, :37:26]
  assign io_rs1 = _id_io_bundleReg_rs1;	// @[<stdin>:204:10, cpu/src/TOP.scala:34:26]
  assign io_rs2 = _id_io_bundleReg_rs2;	// @[<stdin>:204:10, cpu/src/TOP.scala:34:26]
  assign io_rd = _id_io_bundleReg_rd;	// @[<stdin>:204:10, cpu/src/TOP.scala:34:26]
  assign io_imm = _id_io_imm;	// @[<stdin>:204:10, cpu/src/TOP.scala:34:26]
  assign io_resBranch = 1'h0;	// @[<stdin>:204:10, cpu/src/TOP.scala:33:26, :34:26, :35:26, :36:26, :37:26]
endmodule

