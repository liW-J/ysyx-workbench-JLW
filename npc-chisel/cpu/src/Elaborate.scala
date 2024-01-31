import unit.PCRegister
import circt.stage._
import unit.GPRFile

object Elaborate extends App {
  def top = new GPRFile()
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
}
