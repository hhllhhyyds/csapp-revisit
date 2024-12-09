#include <unistd.h>
#include <sys/types.h>

#include "my_assert.h"

int main(int argc, char **argv)
{
    int x = 1;

    pid_t pid = fork();

    MY_ASSERT(pid >= 0, "fork error");

    if (pid == 0)
    {
        ++x;
        printf("This is child process, id = %d, x = %d\n", getpid(), x);
    }
    else
    {
        --x;
        printf("This is parent process, id = %d, child id = %d, x = %d\n", getpid(), pid, x);
    }
}