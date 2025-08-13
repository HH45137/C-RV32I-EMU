#include <stdio.h>
#include <stdlib.h>
#include <emu.h>

int main()
{
    int ret = 0;

    ret = emu_init();
    ret = emu_load("");
    ret = emu_run();
    ret = emu_shutdown();

    return ret;
}
