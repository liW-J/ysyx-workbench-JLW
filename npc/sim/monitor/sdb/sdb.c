/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/paddr.h>

static int is_batch_mode = false;
static int NR_CMD_P = 1;

void init_regex();
void init_wp_pool();
void wp_display();
void wp_watch(char *expr, word_t res);
void wp_delete(int no);

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

 

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  //modify state when force exit
  npc_state.state = NPC_QUIT;
  return -1;
}

static int cmd_si(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int step;

  if (arg == NULL) step = 1;/* no argument given */
  else step = atoi(arg);
  cpu_exec(step);
  return 0;
}

static int cmd_info(char *args){
  // TODO
  char *arg = strtok(NULL, " ");

  if (arg == NULL) {
    /* no argument given */
    printf("Please add entern r/w to display its state.\n");
  }
  // else if (strcmp(arg, "r") == 0){
  //   isa_reg_display();
  // }
  else if (strcmp(arg, "w") == 0){
    wp_display();
  }
  else{
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_x(char *args){
  char* arg1 = strtok(NULL," ");
  char* arg2 = strtok(NULL," ");
  bool success = true;
  int len;
  paddr_t addr;

  if(arg1 == NULL || arg2 ==NULL){
    printf("Please input like \"x N EXPR\" \n");
  }else{
    len = atoi(arg1);
    //like cmd_p to expr arg2
    addr = expr( arg2, &success);   
    // judge pmem range
    if(in_pmem(addr)){
      for(int i = 0 ; i < len ; i ++){    
        printf("%#x\t%#010x\n",addr,paddr_read(addr,4));
        addr = addr + MUXDEF(CONFIG_ISA_x86, 8, 4);   
      }
    }else{
      printf("expr to %#x is out of bound of pmem!;\n",addr);
    }
  }
  return 0;
}

static int cmd_p(char *args){
  bool success = true;
  if (args == NULL){
    printf("Please input expr!\n");
  }else{
    word_t result = expr(args, &success);
    if (success) printf("\\$%d = %d\n",NR_CMD_P,result);
    NR_CMD_P ++;
  }
  return 0;
}

static int cmd_w(char *args){
  bool success = true;
  if (args == NULL) {
    printf("Please input expr!\n");
  }else{
    word_t result = expr(args, &success);
    if(success) wp_watch(args, result);
  }
  return 0;
}

static int cmd_d(char *args){
  char *arg = strtok(NULL," ");
  if (arg == NULL){
    printf("Please input a num to delete!\n");
  }else{
    wp_delete(atoi(arg));
  }
  return 0;
}



static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Exec [N] step of the program", cmd_si },
  { "info", "Display the state your input of the program", cmd_info },
  { "x", "Scan memory", cmd_x },
  { "p", "EXPR evaluation", cmd_p },
  { "w", "Set watchpoint", cmd_w},
  { "d", "Delete watchpoint", cmd_d},


  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
