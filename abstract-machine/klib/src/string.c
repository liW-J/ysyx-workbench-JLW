#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').
size_t strlen(const char *s) {
    size_t len = 0;
    while (*s++) len++;
    return len;
}

// copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest.  The strings may not over‐lap, and the destination string dest must be large enough to receive the copy.
char *strcpy(char *dst, const char *src) {
    char *s = dst;
    while ((*dst++ = *src++) != '\0');
    return s;
}

// is similar, except that at most n bytes of src are copied
char *strncpy(char *dst, const char *src, size_t n) {
  char *tmp = dst;
  while (n) {
    if ((*tmp = *src) != 0)
    {src++; tmp++;  n--;}
  }
  return dst;
}

// appends the src string to the dest string, overwriting the terminating null byte ('\0') at the end of dest, and then adds a terminating null byte.  The strings may not overlap, and the dest string must have enough space for the result.  If dest is not large enough,  program  behavior  is  unpredictable; buffer overruns are a favorite avenue for attacking secure programs.
char *strcat(char *dst, const char *src) {
    char *ret = dst;
    // set p to dst end, ready for appends
    while (*dst) dst++;
    while ((*dst++ = *src++) != '\0')
        ;
    return ret;
}

// compares the two strings s1 and s2.  The locale is not taken into account (for a locale-aware comparison, see strcoll(3)).  The comparison is done using unsigned characters.
int strcmp(const char *s1, const char *s2) {
    int ret = 0;
    while (!(ret = *(unsigned char *)s1 - *(unsigned char *)s2) && *s1) {
        s1++;
        s2++;
    }

    if (ret < 0) return -1;
    else if (ret > 0) return 1;
    return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
    return memcmp(s1, s2, n);
}

void *memset(void *s, int c, size_t n) {
  void* ret = s;
  while(n--){ *(char*)s = (char)c; s++;}
  return ret;
}

void *memmove(void *dst, const void *src, size_t n) {
  const char *s = src;
    char *d = dst;
    if (s < d && s + n > d) {
        s += n, d += n;
        while (n -- > 0) {
            *-- d = *-- s;
        }
    } else {
        while (n -- > 0) {
            *d ++ = *s ++;
        }
    }
    return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
    // 目的地址和源地址可能会有重叠!
    char *cdst = (char *)out;
    const char *csrc = (const char *)in;
    while (n--) {
        *cdst++ = *csrc++;
    }
    return out;
}


// copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.
int memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *su1, *su2;
    int res = 0;
    for (su1 = s1, su2 = s2; 0 < n; ++su1, ++su2, n--)
        if ((res = *su1 - *su2) != 0)
            break;
    return res;
}

#endif
