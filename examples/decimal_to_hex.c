#include "my_assert.h"

int main(int argc, char **argv)
{
    MY_ASSERT(argc > 0, "argc must larger than 0");
    for (int i = 1; i < argc; ++i)
    {
        printf("%d = 0x%x\n", atoi(argv[i]), atoi(argv[i]));
    }
}