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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char expr[32];
  word_t old;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
static int nr_wp = 0;

static WP* new_wp();
void free_wp(WP *wp);
void wp_display();

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp() {
  //check space enough
  assert(free_);
  WP *ret = free_;
  free_ = free_->next;
  WP *temp = head;
  if (nr_wp == 0) {
    head = wp_pool;
    head->next = NULL;
  }else{
    while (temp->next) temp = temp->next;
    temp->next = ret;
    ret->next = NULL;
  }
  nr_wp++;
  return ret;
}

void free_wp(WP *wp) {
  assert(head);
  WP *temp = head;
  if (temp == wp) head = NULL;
  else {
    while (temp && temp->next != wp) temp = temp->next;
    temp->next = wp->next;
  }
  wp->next = free_;
  free_ = wp;
  nr_wp--;
}

void wp_watch(char *expr, word_t res) {
  WP* wp = new_wp();

  strcpy(wp->expr, expr);
  wp->old = res;

  printf("Watchpoint %d: %s\n", wp->NO, expr);
}

void wp_delete(int no) {
  assert(no < NR_WP);
  WP* wp = &wp_pool[no];
  free_wp(wp);
  printf("Delete watchpoint %d: %s\n", wp->NO, wp->expr);
}

void wp_display() {
  WP* temp = head;
  if (temp) {
    printf("%-8s%-10s%-8s%-8s%-8s%-8s\n", "Num", "Type", "Disp", "Enb", "Address", "What");
    while (temp) {
      printf("%-8d%-10s%-8s%-8s%-8s%-8s\n", temp->NO, "watchpoint", "keep", "y", " ", temp->expr);
      temp = temp->next;
    }
  }else puts("No watchpoints.");
}

void difftest_watchpoint() {
  // WP* temp = head;
  // while (temp)
  // {
  //   word_t new = expr(temp->expr,NULL);
  //   if (new != temp->old) {
  //     printf("Watchpoint %d :%s\n",temp->NO,temp->expr);
  //     printf("Old value = %d\nNew value = %d\n",temp->old,new);
  //     temp->old = new;
  //   }
  //   temp = temp->next;
  // }
}

