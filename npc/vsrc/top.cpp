#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
int main(int argc, char** argv, char** env){
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
        Vtop* top = new Vtop;

	VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
	contextp->traceEverOn(true); 
  	top->trace(tfp, 0); 
	tfp->open("wave.vcd"); //设置输出的文件wave.vc
	int count = 0;
	while (!contextp->gotFinish()) {
	contextp->timeInc(1); //推动仿真时间
   	count++;
	int a = rand() & 1;
	int b = rand() & 1;
	top->a = a;
	top->b = b;
	top->f = a ^ b;
	top->eval();
	printf("a = %d, b = %d, f = %d\n", a, b, top->f);
	assert(top->f == (a ^ b));

	tfp->dump(contextp->time()); 
	if (count > 30) 
        	break;
	}

	delete top;
	tfp->close();
	delete contextp;
        exit(0);
}
