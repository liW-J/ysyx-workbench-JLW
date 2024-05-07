package stage

import chisel3._
import chisel3.util._
import config.Status._
import config.Configs._
import config.OpTypes._
import utils._
import config.ExeTypes._

class EXUIO extends Bundle {
  val bundleEXControl = new BundleEXControl()
  val dataRead1       = Input(UInt(DATA_WIDTH.W))
  val dataRead2       = Input(UInt(DATA_WIDTH.W))
  val csrData         = Input(UInt(DATA_WIDTH.W))
  val imm             = Input(UInt(DATA_WIDTH.W))
  val pc              = Input(UInt(ADDR_WIDTH.W))
  val ifuStatus       = Input(UInt(DATA_WIDTH.W))
  val resBranch       = Output(Bool())
  val res             = Output(UInt(DATA_WIDTH.W))
  val resCSR          = Output(UInt(DATA_WIDTH.W))
  val src1            = Output(UInt(DATA_WIDTH.W))
  val src2            = Output(UInt(DATA_WIDTH.W))
  val out             = new AXI4LiteIO
}

class EXU extends Module {
  val io = IO(new EXUIO())

  val resBranch       = WireDefault(false.B)
  val res             = WireDefault(0.U(DATA_WIDTH.W))
  val resCSR          = WireDefault(0.U(DATA_WIDTH.W))
  val src1            = WireDefault(0.U(DATA_WIDTH.W))
  val src2            = WireDefault(0.U(DATA_WIDTH.W))
  val operand1        = WireDefault(0.U(DATA_WIDTH.W))
  val operand2        = WireDefault(0.U(DATA_WIDTH.W))
  val csrData         = WireDefault(0.U(DATA_WIDTH.W))
  val isJAL, isALUSrc = WireDefault(false.B)

  io.out.ar := DontCare
  io.out.r  := DontCare

  io.out.w.valid     := false.B
  io.out.w.bits.strb := 0.U
  io.out.aw.valid    := false.B
  io.out.aw.bits.len := 0.U
  io.out.b.ready     := false.B

  src1     := io.dataRead1
  src2     := io.dataRead2
  csrData  := io.csrData
  isJAL    := io.bundleEXControl.isJAL
  isALUSrc := io.bundleEXControl.isALUSrc

  when(isJAL) {
    operand1 := io.pc
  }.otherwise {
    operand1 := src1
  }

  when(isALUSrc) {
    operand2 := io.imm
  }.otherwise {
    operand2 := src2
  }

  when(io.ifuStatus === s_get_inst) {
    io.out.aw.valid := true.B
    io.out.w.valid  := true.B
    io.out.b.ready  := true.B
    switch(io.bundleEXControl.aluType) {
      is(ALU_LUI) { res := operand2 }
      is(ALU_ADD) { res := operand1 +& operand2 }
      is(ALU_SUB) { res := operand1 -& operand2 }
      is(ALU_AND) { res := operand1 & operand2 }
      is(ALU_OR) { res := operand1 | operand2 }
      is(ALU_XOR) { res := operand1 ^ operand2 }
      is(ALU_LT) {
        when(io.bundleEXControl.isBranch) {
          when(io.bundleEXControl.isUnsigned) {
            resBranch := src1 < src2
          }.otherwise { resBranch := src1.asSInt < src2.asSInt }
          res := operand1 +& operand2
        }.otherwise {
          when(io.bundleEXControl.isUnsigned) {
            res := operand1 < operand2
          }.otherwise { res := operand1.asSInt < operand2.asSInt }
        }
      }
      is(ALU_EQ) {
        resBranch := (src1 === src2)
        res       := operand1 +& operand2
      }
      is(ALU_NEQ) {
        resBranch := (src1 =/= src2)
        res       := operand1 +& operand2
      }
      is(ALU_GE) {
        when(io.bundleEXControl.isUnsigned) {
          resBranch := src1 >= src2
        }.otherwise { resBranch := src1.asSInt >= src2.asSInt }
        res := operand1 +& operand2
      }
      is(ALU_SRA) { res := (operand1.asSInt >> operand2(4, 0)).asUInt }
      is(ALU_SRL) { res := (operand1 >> operand2(4, 0)) }
      is(ALU_SLL) { res := (operand1 << operand2(4, 0)) }
      is(ALU_CSR_RS) {
        res := operand1 | csrData
      }
      is(ALU_CSR_RW) {
        res := operand1
      }
    }
  }

  io.src1             := src1
  io.src2             := src2
  io.res              := res
  io.resBranch        := resBranch
  io.resCSR           := resCSR
  io.out.aw.bits.addr := res
  io.out.w.bits.data  := src2
}
