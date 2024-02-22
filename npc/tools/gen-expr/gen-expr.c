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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";



static int buf_len = sizeof(buf)/sizeof(buf[0]);
static char *buf_position = buf;

static int choose(int n) {
  return rand() % n;
}

static void gen(int token_type){
  if (buf_position < buf+buf_len) {
  int nr_writes = snprintf(buf_position, buf_len, "%c", token_type);
    if (nr_writes > 0) {
      buf_position += nr_writes;
    }
  }
}

static void gen_rand_op(){
  int op_type_list[] = {'+','-','*','/'};
  int op_type = op_type_list[choose(sizeof(op_type_list)/sizeof(op_type_list[0]))];
  gen(op_type);
}

static void gen_num(){
  int num = choose(INT8_MAX);
  if (buf_position < buf+buf_len) {
    int nr_writes = snprintf(buf_position, buf_len, "%d", num);
    if (nr_writes > 0) {
      buf_position += nr_writes;
    }
  }
}



static void gen_rand_expr() {
  switch (choose(3)) {
    case 0: gen_num(); break;
    case 1: gen('('); gen_rand_expr(); gen(')'); break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf_position = buf;
    gen_rand_expr();
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -Wall -Werror -o  /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    uint32_t result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);


    printf("%d %s\n", result, buf);
  }
  return 0;
}
