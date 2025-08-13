#include <emu.h>
#include <stdio.h>
#include <stdlib.h>

int emu_init()
{
    printf("Init\n");

    return 0;
}

int emu_shutdown()
{
    printf("Shutdown\n");

    return 0;
}

int emu_load(char *path)
{
    printf("Load:%s\n", path);
    return 0;
}

int emu_run()
{
    printf("Run\n");
    return 0;
}
