#include <common.h>
#include <cpu/cpu.h>

void init_monitor(int, char *[]);
void engine_start();
int is_exit_status_bad();
void sdb_mainloop();

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}

void engine_start() {
#ifdef CONFIG_TARGET_AM
  cpu_exec(-1);
#else
  /* Receive commands from user. */
  sdb_mainloop();
  // cpu_exec(-1);
#endif
}