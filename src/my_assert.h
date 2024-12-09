#include <stdio.h>
#include <stdlib.h>

#define MY_TRUE 1
#define MY_FALSE 0

#define MY_ASSERT(condition, ...)                                                                  \
    do                                                                                             \
    {                                                                                              \
        if (!(condition))                                                                          \
        {                                                                                          \
            fprintf(stderr, "assertion { %s } failed at %s:%d\n", #condition, __FILE__, __LINE__); \
            fprintf(stderr, __VA_ARGS__);                                                          \
            fprintf(stderr, "\n");                                                                 \
            exit(-1);                                                                              \
        }                                                                                          \
    } while (0);