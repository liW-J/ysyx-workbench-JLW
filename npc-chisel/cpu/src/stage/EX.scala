package stage

import chisel3._
import chisel3.util._

import config.Configs._
import config.OPcodes._
import utils._
import config.EXEop._

//-----------------------------------------------------------------------------
// EX
//-----------------------------------------------------------------------------
//
// Description :
// Input  :
// Output :
//
//-----------------------------------------------------------------------------
class ExecIO extends Bundle {
    val bundleEXControl = new BundleEXControl()
    val dataRead1 = Input(UInt(DATA_WIDTH.W))
    val dataRead2 = Input(UInt(DATA_WIDTH.W))
    val imm = Input(UInt(DATA_WIDTH.W))
    val pc = Input(UInt(ADDR_WIDTH.W))
    val resultBranch = Output(Bool())
    val res = Output(UInt(DATA_WIDTH.W))
}

class EX extends Module {
    val io = IO(new ExecIO())

    // 用于输出比较结果和计算结果
    val resultBranch = WireDefault(false.B)
    
    val res = WireDefault(0.U(DATA_WIDTH.W))
    val src1 = WireDefault(0.U(DATA_WIDTH.W))
    val src2 = WireDefault(0.U(DATA_WIDTH.W))

    src1 := Mux(io.bundleEXControl.isJAL, io.pc, io.dataRead1)
    src2 := Mux(io.bundleEXControl.isALUSrc, io.imm, io.dataRead2)

    // 根据bundleAluControl中的信号进行选择
    switch(io.bundleEXControl.exeOP) {
        is(EXE_ADD) {
            res := src1 +& src2
        }
    }

    io.res := res
    io.resultBranch := resultBranch
}
