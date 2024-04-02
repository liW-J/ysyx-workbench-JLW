#include <am.h>
#include <npc.h>
#include <sys/time.h>
#include <time.h>

static uint64_t boot_time = 0;

static uint64_t get_now() {
  uint32_t hi = inl(RTC_ADDR + 4);
  uint32_t lo = inl(RTC_ADDR);
  uint64_t time = ((uint64_t)hi << 32) | lo;
  return time;
}

void __am_timer_init() {
  boot_time = get_now();
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = get_now() - boot_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}