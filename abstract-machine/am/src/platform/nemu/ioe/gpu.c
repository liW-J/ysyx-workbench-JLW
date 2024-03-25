#include <am.h>
#include <nemu.h>
#include <string.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

#define WMASK 0xffff0000
#define HMASK 0x0000ffff

static int width  = 0;
static int height = 0;

void __am_gpu_init() {
  uint32_t cfg = inl(VGACTL_ADDR);
  width = cfg & WMASK >> 16;  
  height = cfg & HMASK;  
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // for (int i = 0; i < width * height; i ++) fb[i] = i;

  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width, .height = height,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  if (w == 0 || h == 0) return;

  uint32_t *pixels = ctl->pixels;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t screen_w = inl(VGACTL_ADDR) >> 16;
  for (int i = y; i < y+h; i++) {
    for (int j = x; j < x+w; j++) {
      fb[screen_w*i+j] = pixels[w*(i-y)+(j-x)]; //缓冲区是一个像素块
    }
  }

  if (ctl->sync) outl(SYNC_ADDR, 1);

}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
