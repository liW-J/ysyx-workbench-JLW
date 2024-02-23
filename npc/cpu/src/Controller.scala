import chisel3._
import chisel3.util._

import utils._


class ControllerIO extends Bundle {
    val bundleControlIn = Flipped(new BundleControl()) // ID
    val bundleEXControl = Flipped(new BundleEXControl())  // EX
    val bundleDataControl = Flipped(new BundleDataControl())  // DATA
    val bundleControlOut = new BundleControl() 
}

class Controller extends Module {
    val io = IO(new ControllerIO)

    io.bundleEXControl.isALUSrc := io.bundleControlIn.isALUSrc
    io.bundleEXControl.isBranch := io.bundleControlIn.isBranch
    io.bundleEXControl.isJAL := io.bundleControlIn.isJAL
    io.bundleEXControl.isSigned := io.bundleControlIn.isSigned
    io.bundleEXControl.exeType := io.bundleControlIn.exeType
    
    io.bundleDataControl.isLoad := io.bundleControlIn.isLoad
    io.bundleDataControl.isStore := io.bundleControlIn.isStore
    io.bundleDataControl.isSigned := io.bundleControlIn.isSigned
    io.bundleDataControl.lsType := io.bundleControlIn.lsType
    
    io.bundleControlOut <> io.bundleControlIn
}
