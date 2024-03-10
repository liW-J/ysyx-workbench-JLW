#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  char out[4096];
  int length = vsprintf(out, fmt, ap);
  for (int i = 0; i < length; i++) {
    putch(out[i]);
  }
  va_end(ap);
  return length;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  return vsnprintf(out, -1, fmt, ap);
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int length = vsprintf(out, fmt, ap);
  va_end(ap);
  return length;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  int pos = 0, width = 0;

  for (; *fmt != '\0'; fmt++) {
    while (*fmt != '%' && *fmt != '\0') {
      out[pos++] = *fmt++;
      if (pos > n) {
        return n;
      }
    }

    if (*fmt == '%') fmt++;
    else if (*fmt == '\0') break;

    char padding = ' ';
    if (*fmt == '0') {
      padding = '0';
      fmt++;
    }

    while (*fmt >= '0' && *fmt <= '9') {
      width = width * 10 + *fmt++ - '0';
    }

    switch (*fmt) {
      case 's': {
        char *s = va_arg(ap, char *);
        while (*s != '\0') {
          out[pos++] = *s++;
          if (pos > n) return n;
        }
        break;
      }
      case 'd': {
        int d = va_arg(ap, int);
        if (d < 0) {
            d = -d;
            out[pos++] = '-';
            if (pos > n) return n;
        }
        char num[20] = {0};
        int rem = 0, length = 0;

        do {
          rem = d % 10;
          d = d / 10;
          num[length++] = rem + '0';
        } while (d > 0);

        while (length < width) {
          out[pos++] = padding;
          width--;
          if (pos > n) return n;
        }

        length--;
        for (; length >= 0; length--) {
          out[pos++] = num[length];
          if (pos > n) return n;
        }
        break;
      }
      case 'p':
      case 'x': {
          uint64_t d = va_arg(ap, uint64_t);
          char num[20] = {0};
          int rem = 0;
          int length = 0;

          do {
            rem = d % 16;
            d = d / 16;
            if (rem <= 9) num[length++] = rem + '0';
            else num[length++] = rem - 10 + 'a';
          } while (d > 0);

          while (length < width) {
            out[pos++] = padding;
            width--;
            if (pos > n) return n;
          }

          out[pos++] = '0';
          if (pos > n) return n;

          out[pos++] = 'x';
          if (pos > n) return n;

          length--;
          for (; length >= 0; length--) {
            out[pos++] = num[length];
            if (pos > n) return n;
          }
          break;
        }
      }
    }

  if (pos > n) return n;

  out[pos] = '\0';
  return pos;
}

#endif
