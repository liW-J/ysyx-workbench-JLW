import unit.PCRegister
import circt.stage._
import unit.Decode

object Elaborate extends App {
  def top = new Decode()
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
}
