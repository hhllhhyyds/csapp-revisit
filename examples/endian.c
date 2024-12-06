#include "my_assert.h"

int main(int argc, char **argv)
{
    int x = 0x1234567;
    unsigned char *bytes = (unsigned char *)&x;

    if (bytes[0] == 0x01 &&
        bytes[1] == 0x23 &&
        bytes[2] == 0x45 &&
        bytes[0] == 0x67)
    {
        printf("This machine is big endian\n");
    }
    else if (bytes[0] == 0x67 &&
             bytes[1] == 0x45 &&
             bytes[2] == 0x23 &&
             bytes[3] == 0x01)
    {
        printf("This machine is little endian\n");

        int y = 12345;
        bytes = (unsigned char *)&y;
        MY_ASSERT(
            bytes[0] == 0x39 &&
                bytes[1] == 0x30 &&
                bytes[2] == 0x00 &&
                bytes[3] == 0x00,
            "error");

        float z = 12345;
        bytes = (unsigned char *)&z;
        MY_ASSERT(
            bytes[0] == 0x00 &&
                bytes[1] == 0xe4 &&
                bytes[2] == 0x40 &&
                bytes[3] == 0x46,
            "error");
    }
    else
    {
        printf("bytes[0] = 0x%x\n", bytes[0]);
        printf("bytes[1] = 0x%x\n", bytes[1]);
        printf("bytes[2] = 0x%x\n", bytes[2]);
        printf("bytes[3] = 0x%x\n", bytes[3]);
        MY_ASSERT(MY_FALSE, "unreachable");
    }
}