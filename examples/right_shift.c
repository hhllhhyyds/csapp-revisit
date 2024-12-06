#include "my_assert.h"

int main(int argc, char **argv)
{
    int x = 0x81234566;
    printf("int x = 0x81234566 in decimal: %d\n", x);
    printf("x / 2 = %d\n", x / 2);
    printf("x >> 1 = %d\n", x >> 1);
    if (x / 2 == x >> 1)
    {
        printf("Arithmetic right shift for signed int\n");
    }

    unsigned int y = 0x81234566;
    printf("unsigned int y = 0x81234566 in decimal: %u\n", x);
    printf("y / 2 = %u\n", y / 2);
    printf("y >> 1 = %u\n", y >> 1);
    MY_ASSERT(y / 2 == y >> 1, "error");

    unsigned int z = 0x81234567;
    printf("unsigned int y = 0x81234567 in decimal: %u\n", x);
    printf("z / 2 = %u\n", z / 2);
    printf("z >> 1 = %u\n", z >> 1);
    MY_ASSERT(z / 2 == z >> 1, "error");
}