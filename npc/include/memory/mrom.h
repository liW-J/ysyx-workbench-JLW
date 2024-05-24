#ifndef __MEMORY_MROM_H__
#define __MEMORY_MROM_H__

#include <common.h>

extern "C" void flash_read(int addr, int *data);
extern "C" void mrom_read(int addr, int *data);

#endif
