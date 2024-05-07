#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <cpu/ifetch.h>
#include <verilated.h>   //访问验证程序例程的库
#include <verilated_vcd_c.h>  //向VCD文件中写入波形
#include "VTOP.h"
#include "VTOP__Dpi.h"
#include "svdpi.h"

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write
VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;

#define MAX_INST_TO_PRINT 10
CPU_state cpu = {};
VTOP top ;
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
static bool g_print_iring = false;
static bool g_print_mem = false;
static bool g_print_func = false;
static bool is_ebreak = false;
static vaddr_t g_pc = 0;
vaddr_t flag_pc = 0x80000000;
int count = 0;

void device_update();
void difftest_watchpoint();

void check_ebreak(svBit flag){
  is_ebreak = flag;
}

void get_pc(int pc){
  g_pc = pc;
}

void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif

  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(g_pc, dnpc));
  IFDEF(CONFIG_WATCHPOINT, difftest_watchpoint());
}

static void single_cycle() {
    top.clock = 0;
    top.eval();
    top.clock = 1;
    top.eval();
}

static void exec_once(Decode *s, vaddr_t pc) {

 
  // top.io_inst = Mr(pc,4);

  // top.eval();
  // Log(DEBUG, "inst=%08x", top.io_inst);
  single_cycle();
  // Log(DEBUG, "PC: %x", g_pc);
  // Log(DEBUG, "reg1=%08x", top.io_rs1);
  // Log(DEBUG, "reg2=%08x", top.io_rs2);
  // Log(DEBUG, "rd=%08x", top.io_rd);
  // Log(DEBUG, "src1=%x", top.io_src1);
  // Log(DEBUG, "src2=%x", top.io_src2);
  // Log(DEBUG, "resEX=%08x", top.io_resEX);
  // Log(DEBUG, "isLoad=%08x", top.io_bundleControl_isLoad);
  // Log(DEBUG, "isStore=%08x", top.io_bundleControl_isStore);
  // Log(DEBUG, "imm=%x", top.io_imm);
  // Log(DEBUG, "G_PC: %x", g_pc);
  s->pc = pc;
  s->snpc = pc+4;
  s->isa.inst.val = top.io_inst;
  if (is_ebreak) NPCTRAP(pc, 0);
  

  
  
  // Log(WARN, "exce_once");
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ',space_len);
  p += space_len;

  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#endif
  
  cpu.pc = g_pc;
  s->dnpc = g_pc;
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, g_pc);
    if(count == 2){
      g_nr_guest_inst ++;
      trace_and_difftest(&s, g_pc);
      count = 0;
    }else{ count += 1;}
    
    if (npc_state.state != NPC_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log(INFO, "host time spent = " NUMBERIC_FMT " us", g_timer);
  Log(INFO, "total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log(INFO, "simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log(INFO, "Finish running in less than 1 us and can not calculate the simulation frequency");
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (npc_state.state) {
    case NPC_END: case NPC_ABORT:
      Log(WARN, "Program execution has ended. To restart the program, exit NPC and run again.");
      return;
    default: npc_state.state = NPC_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: case NPC_ABORT:
      Log(INFO, "npc: %s at pc = " FMT_WORD,
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
      // fall through
    case NPC_QUIT: statistic();
  }
}
