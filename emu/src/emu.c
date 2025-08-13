#include <assert.h>
#include <emu.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


// 4 Bytes
typedef uint32_t WORD;
// 2 Bytes
typedef uint16_t HWORD;
// 1 Byte
typedef uint8_t BYTE;


size_t reg_num, mem_size;
// Register
WORD *reg = NULL;
// RAM
BYTE *mem = NULL;


int emu_init(size_t _mem_size, size_t _reg_num) {
    printf("Start initialization...\n");

    // Memory size > 0G And size <= 4G.
    if ((_mem_size > 0x00000000 && _mem_size <= 0xFFFFFFFF) == false) {
        printf("Memory too large or too small!\n");
        return -1;
    }

    if (_reg_num <= 0) {
        printf("The number of registers must be greater than zero!\n");
        return -1;
    }

    mem_size = _mem_size;
    mem = malloc(mem_size);
    assert(mem);
    printf("Memory size: %zu Bytes.\n", mem_size);

    reg_num = _reg_num;
    reg = malloc(reg_num);
    assert(reg);
    printf("Registers number: %zu.\n", reg_num);

    printf("Initialization completed.\n");

    return 0;
}

int emu_shutdown() {
    printf("Shutdown\n");

    free(mem);
    free(reg);

    return 0;
}

int emu_load(char *path) {
    printf("Load:%s\n", path);
    return 0;
}

int emu_run() {
    printf("Run\n");
    return 0;
}
