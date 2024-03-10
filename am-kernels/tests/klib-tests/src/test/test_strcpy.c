#include <klibtest.h>

#define N 32
char dst[N],src[N];

void reset_char(){
  int i;
  for (i = 0; i < N-1; i ++) {
    dst[i] = i + 1;
    src[i] = i + 1;
  }
  dst[N-1] = '\0';
  src[N-1] = '\0';
}

// 检查[l,r)区间中的值是否依次为val, val + 1, val + 2...
void check_seq_str(int l, int r, int val){
  int i;
  if (r == N) r--;
  for (i = l; i < r; i ++) {
    assert(dst[i] == val + i - l);
  }
}

// 检查[l,r)区间中的值是否均为val
void check_eq_str(int l, int r, int val){
  int i;
  for (i = l; i < r-1; i ++) {
    assert(dst[i] == val);
  }
}

void test_strcpy() {
  int l,r;
  for (l = 0; l < N-1; l ++) {
    for (r = l + 1; r <= N-1; r ++) {
      reset_char();
      int val = (l + r) / 2;
      memset(src + l, val, r-l-1);
      src[r] = '\0';
      strcpy(dst, src);
      check_seq_str(0, l, 1);
      check_eq_str(l, r, val);
      check_seq_str(r+1, N-1, r + 2);
    }
  }
}