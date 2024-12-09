#include <unistd.h>
#include <sys/types.h>

#include "my_assert.h"

int main(int argc, char **argv)
{
    pid_t this_process_id = getpid();
    pid_t parent_process_id = getppid();

    printf("This process id = %d\n", this_process_id);
    printf("Parent process id = %d\n", parent_process_id);
}