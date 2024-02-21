#include <utils.h>

void set_npc_state(int state, vaddr_t pc, int halt_ret) {
  difftest_skip_ref();
  npc_state.state = state;
  npc_state.halt_pc = pc;
  npc_state.halt_ret = halt_ret;
}
