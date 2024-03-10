#include <klibtest.h>

void (*entry)() = NULL; // mp entry

static const char *tests[256] = {
    ['H'] = "display this help message",
    ['t'] = "test_memset",
    ['s'] = "test_strcpy",
};

int main(const char *args) {
  switch (args[0]) {
    CASE('t', test_memset);
    CASE('s', test_strcpy);
    case 'H':
    default:
      printf("Usage: make run mainargs=*\n");
      for (int ch = 0; ch < 256; ch++) {
        if (tests[ch]) {
          printf("  %c: %s\n", ch, tests[ch]);
        }
      }
  }
  return 0;
}