#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i)
    {
        printf("%d = 0x%x\n", atoi(argv[i]), atoi(argv[i]));
    }
}