#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VysyxSoCFull.h"

VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;

static VysyxSoCFull *top;

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new VysyxSoCFull;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("dump.vcd");
}

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
}

int main() {
    sim_init();

    top->a = 0b11100100;

    top->s = 0b00;
    step_and_dump_wave();
    top->s = 0b01;
    step_and_dump_wave();
    top->s = 0b10;
    step_and_dump_wave();
    top->s = 0b11;
    step_and_dump_wave();

    sim_exit();
}