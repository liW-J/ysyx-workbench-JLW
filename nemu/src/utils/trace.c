#include <common.h>
#include <memory/paddr.h>
#include <cpu/ifetch.h>

#define IRINGBUF_RANGE 5
#define MAX_IRINGBUF 10

typedef struct {
  word_t pc;
  uint32_t inst;
} ItraceNode;

ItraceNode iringbuf[MAX_IRINGBUF];
int p_cur = 0;
int p_error = 0;
bool is_full = false;

void iringbuf_inst(word_t pc, uint32_t inst) {
  LOG(DEBUG, "p_cur = %x\n",p_cur);
  iringbuf[p_cur].pc = pc;
  iringbuf[p_cur].inst = inst;
  p_cur = (p_cur + 1) % MAX_IRINGBUF;
  is_full = is_full || p_cur == 0;
}

void display_iringbuf() {
  if (!is_full && !p_cur) return;

    int p_error = p_cur;
    int i = is_full?p_cur:0;

    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    char buf[128]; // 128 should be enough!
    char *p;
    do {
      p = buf;
      p += sprintf(buf, "%s" FMT_WORD ": %08x ", (i+1)%MAX_IRINGBUF==p_error?" --> ":"     ", iringbuf[i].pc, iringbuf[i].inst);
      disassemble(p, buf+sizeof(buf)-p, iringbuf[i].pc, (uint8_t *)&iringbuf[i].inst, 4);

      if ((i+1)%MAX_IRINGBUF==p_error) printf(ANSI_FG_RED);
      puts(buf);
    } while ((i = (i+1)%MAX_IRINGBUF) != p_error);
    puts(ANSI_NONE);

}
