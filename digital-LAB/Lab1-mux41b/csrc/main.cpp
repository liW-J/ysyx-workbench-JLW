#include <nvboard.h>
#include <Vtop.h>

// VerilatedContext *contextp = NULL;
// VerilatedVcdC *tfp = NULL;

// static Vtop *top;
static TOP_NAME dut;

void nvboard_bind_all_pins(Vtop *top);


static void single_cycle() {
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
}

static void reset(int n) {
    dut.rst = 1;
    while (n-- > 0) single_cycle();
    dut.rst = 0;
}

// void step_and_dump_wave() {
//     top->eval();
//     contextp->timeInc(1);
//     tfp->dump(contextp->time());
// }

// void sim_init() {
//     contextp = new VerilatedContext;
//     tfp = new VerilatedVcdC;
//     top = new Vmux41b;
//     contextp->traceEverOn(true);
//     top->trace(tfp, 0);
//     tfp->open("dump.vcd");
// }

// void sim_exit() {
//     step_and_dump_wave();
//     tfp->close();
// }

int main() {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    // sim_init();
    
    reset(10);

    // top->a = 0b11100100;

    // top->s = 0b00;
    // step_and_dump_wave();
    // top->s = 0b01;
    // step_and_dump_wave();
    // top->s = 0b10;
    // step_and_dump_wave();
    // top->s = 0b11;
    // step_and_dump_wave();

    while(1){
        nvboard_update();
        single_cycle();
    }

    // sim_exit();
}