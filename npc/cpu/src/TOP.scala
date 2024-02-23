import chisel3._
import chisel3.util._

import Configs._
// import utils._
// import unit.PCRegister
// import unit.DataRam
// import unit.GPRFile
// import unit.InstRom
// import _root_.stage.ID
// import _root_.stage.EX

class TopIO extends Bundle {
    val pc = Output(UInt(ADDR_WIDTH.W))
    val inst = Output(UInt(INST_WIDTH.W))
    val bundleControl = new BundleControl()
    val resEX = Output(UInt(DATA_WIDTH.W))
    val rs1 = Output(UInt(DATA_WIDTH.W))
    val rs2 = Output(UInt(DATA_WIDTH.W))
    val imm = Output(UInt(DATA_WIDTH.W))
    val resBranch = Output(Bool())
    val resLoad = Output(UInt(DATA_WIDTH.W))
}

class TOP extends Module {
    val io = IO(new TopIO())

    val pcReg = Module(new PCRegister())
    val instRom = Module(new InstRom())
    val id = Module(new ID())
    val gprFile = Module(new GPRFile())
    val ex = Module(new EX())
    val dataRam = Module(new DataRam())
    val controller = Module(new Controller())

    // judge nextPC by control from frontPC
    pcReg.io.resBranch <> ex.io.resBranch
    pcReg.io.addrTarget <> dataRam.io.res
    pcReg.io.isBranch <> controller.io.bundleControlOut.isBranch
    pcReg.io.isJump <> controller.io.bundleControlOut.isJump
    
    // get inst from pcAddr
    instRom.io.addr <> pcReg.io.pc

    // get inst to Decoder
    id.io.inst <> instRom.io.inst

    // read or write GPRs from IDres to $rs1/$rs2/$rd
    // if isJump, set nextPC to $rd temporarily
    gprFile.io.bundleReg <> id.io.bundleReg
    gprFile.io.writeEnable <> controller.io.bundleControlOut.writeEnable
    gprFile.io.isJump <> controller.io.bundleControlOut.isJump
    gprFile.io.dataWrite <> dataRam.io.res
    gprFile.io.pc <> pcReg.io.pc 

    // exec ALU operate by control from thisInstDecode
    ex.io.bundleEXControl <> controller.io.bundleEXControl
    ex.io.dataRead1 <> gprFile.io.dataRead1
    ex.io.dataRead2 <> gprFile.io.dataRead2
    ex.io.imm <> id.io.imm
    ex.io.pc <> pcReg.io.pc
    
    // Load or Store -> resEX or 
    dataRam.io.bundleDataControl <> controller.io.bundleDataControl
    dataRam.io.dataStore <> gprFile.io.dataRead2
    dataRam.io.resEX <> ex.io.res

    controller.io.bundleControlIn <> id.io.BundleControl
    
    io.pc <> pcReg.io.pc
    io.bundleControl <> id.io.BundleControl
    io.inst <> instRom.io.inst
    io.resLoad <> dataRam.io.res
    io.resEX <> ex.io.res
    io.resBranch <> ex.io.resBranch
    io.imm <> id.io.imm
    io.rs1 <> gprFile.io.dataRead1
    io.rs2 <> gprFile.io.dataRead2
}
