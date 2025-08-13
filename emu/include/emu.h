#pragma once
#include <stddef.h>

int emu_init(size_t _mem_size, size_t _reg_num);

int emu_shutdown();

int emu_load(char *path);

int emu_run();
