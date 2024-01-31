import unit.PCRegister
import circt.stage._
import stage.EX


object Elaborate extends App {
  def top = new EX()
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
}
