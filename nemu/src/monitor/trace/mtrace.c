#include <common.h>
#include <memory/paddr.h>

void display_pread(paddr_t addr, int len){
  LOG(DEBUG, "pread at " FMT_PADDR ", len=%d.", addr, len);
}

void display_pwrite(paddr_t addr, int len,  word_t data){
  LOG(DEBUG, "pwrite at " FMT_PADDR ", len=%d, data=" FMT_WORD ".", addr, len, data);
}