import circt.stage._

object Elaborate extends App {

    def top       = new ysyx_23060194(args(0))
    val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
    (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))

}
