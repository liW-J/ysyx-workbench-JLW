// Generated by CIRCT firtool-1.44.0
// Standard header to adapt well known macros to our needs.
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_REG_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_REG_INIT
`endif // not def RANDOMIZE

// RANDOM may be set to an expression that produces a 32-bit random unsigned value.
`ifndef RANDOM
  `define RANDOM $random
`endif // not def RANDOM

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

module GCD(	// @[<stdin>:3:10]
  input         clock,	// @[<stdin>:4:11]
                reset,	// @[<stdin>:5:11]
  input  [15:0] io_value1,	// @[cpu/src/GCD.scala:9:14]
                io_value2,	// @[cpu/src/GCD.scala:9:14]
  input         io_loadingValues,	// @[cpu/src/GCD.scala:9:14]
  output [15:0] io_outputGCD,	// @[cpu/src/GCD.scala:9:14]
  output        io_outputValid	// @[cpu/src/GCD.scala:9:14]
);

  reg [15:0] x;	// @[cpu/src/GCD.scala:17:14]
  reg [15:0] y;	// @[cpu/src/GCD.scala:18:14]
  always @(posedge clock) begin	// @[<stdin>:4:11]
    if (io_loadingValues) begin	// @[cpu/src/GCD.scala:9:14]
      x <= io_value1;	// @[cpu/src/GCD.scala:17:14]
      y <= io_value2;	// @[cpu/src/GCD.scala:18:14]
    end
    else if (x > y)	// @[cpu/src/GCD.scala:17:14, :18:14, :20:10]
      x <= x - y;	// @[cpu/src/GCD.scala:17:14, :18:14, :20:24]
    else	// @[cpu/src/GCD.scala:20:10]
      y <= y - x;	// @[cpu/src/GCD.scala:17:14, :18:14, :20:49]
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
        x = _RANDOM[/*Zero width*/ 1'b0][15:0];	// @[<stdin>:3:10, cpu/src/GCD.scala:17:14]
        y = _RANDOM[/*Zero width*/ 1'b0][31:16];	// @[<stdin>:3:10, cpu/src/GCD.scala:17:14, :18:14]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	// @[<stdin>:3:10]
      `FIRRTL_AFTER_INITIAL	// @[<stdin>:3:10]
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  assign io_outputGCD = x;	// @[<stdin>:3:10, cpu/src/GCD.scala:17:14]
  assign io_outputValid = y == 16'h0;	// @[<stdin>:3:10, cpu/src/GCD.scala:18:14, :28:23]
endmodule

