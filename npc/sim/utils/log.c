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

#include <common.h>
/**
日志打印示例。
使用：
Log(DEBUG, "This is debug info\n");
结果：
[2018-07-22 23:37:27:172] [DEBUG] [main.cpp:5] This is debug info
默认打印当前时间（精确到毫秒）、文件名称、行号。
*/
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include <common.h>

#ifndef LOGLEVEL
#define LOGLEVEL DEBUG
#endif

static void get_timestamp(char *buffer)
{
    time_t t;
    struct tm *p;
    struct timeval tv;
    int len;
    int millsec;

    t = time(NULL);
    p = localtime(&t);

    gettimeofday(&tv, NULL);
    millsec = (int)(tv.tv_usec / 1000);

    /* 时间格式：[2011-11-15 12:47:34:888] */
    len = snprintf(buffer, 32, "[%04d-%02d-%02d %02d:%02d:%02d:%03d] ",
        p->tm_year+1900, p->tm_mon+1,
        p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec, millsec);

    buffer[len] = '\0';
}

void mylog(const char* filename, int line, enum LogLevel level, const char* fmt, ...)
{
    if(level > LOGLEVEL)
        return;

    va_list arg_list;
    char buf[1024];
    memset(buf, 0, 1024);
    va_start(arg_list, fmt);
    vsnprintf(buf, 1024, fmt, arg_list);
    char time[32] = {0};

    // 去掉*可能*存在的目录路径，只保留文件名
    const char* tmp = strrchr(filename, '/');
    if (!tmp) tmp = filename;
    else tmp++;
    get_timestamp(time);

	switch(level){
		case DEBUG:
			//green
			printf("\033[1;32m%s[%s] [%s:%d] %s\n\033[0m", time, "DEBUG", tmp, line, buf);
			break;
		case INFO:
			//blue
			printf("\033[1;34m%s[%s] [%s:%d] %s\n\033[0m", time, "INFO", tmp, line, buf);
			break;
		case ERROR:
			//red
			printf("\033[1;31m%s[%s] [%s:%d] %s\n\033[0m", time, "ERROR", tmp, line, buf);
			break;
		case WARN:
			//yellow
			printf("\033[1;33m%s[%s] [%s:%d] %s\n\033[0m", time, "WARN", tmp, line, buf);
			break;
	}
    va_end(arg_list);
}

extern uint64_t g_nr_guest_inst;

#ifndef CONFIG_TARGET_AM
FILE *log_fp = NULL;
FILE *ftrace_fp = NULL;

void init_log(const char *log_file, const char *ftrace_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    Assert(fp, "Can not open '%s'", log_file);
    log_fp = fp;
  }
  LOG("Log is written to %s", log_file ? log_file : "stdout");
  
  #ifdef CONFIG_FTRACE_COND
  ftrace_fp = stdout;
  if (ftrace_file != NULL) {
    FILE *fp = fopen(ftrace_file, "w");
    Assert(fp, "Can not open '%s'", ftrace_file);
    ftrace_fp = fp;
  }
  LOG("ftrace is written to %s", ftrace_file ? ftrace_file : "stdout");
  #endif
}


bool log_enable() {
  return MUXDEF(CONFIG_TRACE, (g_nr_guest_inst >= CONFIG_TRACE_START) &&
         (g_nr_guest_inst <= CONFIG_TRACE_END), false);
}
#endif
