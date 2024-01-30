package unit

import chisel3._
import chisel3.util._

import config.Configs._
import config.OPcodes._
import utils._

//-----------------------------------------------------------------------------
// Decoder
//-----------------------------------------------------------------------------
//
// Description : 
// Input  : 
// Output :
//
//-----------------------------------------------------------------------------
class DecoderIO extends Bundle {
    val inst = Input(UInt(INST_WIDTH.W))
    val bundleCtrl = new BundleControl()
    val bundleReg = new BundleReg()
    val imm = Output(UInt(DATA_WIDTH.W))
}

class Decode extends Module with DecodeUtils {
    val io = IO(new DecoderIO())

    io.bundleReg.rs1 := io.inst(19, 15)
    io.bundleReg.rs2 := io.inst(24, 20)
    io.bundleReg.rd := io.inst(11, 7)
    
    val imm = WireDefault(0.U(32.W))
    val isJump = WireDefault(false.B)
    val isBranch = WireDefault(false.B)
    val opcode = WireDefault(0.U(OP_TYPES_WIDTH.W))

    opcode := io.inst(6, 0)

    switch (opcode) {
        is (EX_EBREAK_OP) {
            printf("ebreak")
        }
        is (EX_ADDI_OP) {
            printf("addi")
            imm := decodeImm(io.inst,typeI)
        }
    }

    io.bundleCtrl.isJump := isJump
    io.bundleCtrl.isBranch := isBranch
    io.bundleCtrl.opcode := opcode
    io.imm := imm
}
