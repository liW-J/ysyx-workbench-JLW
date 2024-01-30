import unit.PCRegister
import circt.stage._
import unit.InstRom

object Elaborate extends App {
  def top = new InstRom()
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
}
