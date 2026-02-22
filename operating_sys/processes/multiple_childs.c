#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

#define NUM_CHILDREN 3

int main(void)
{
    pid_t pid;

    for (int i = 0; i < NUM_CHILDREN; i++) {
        pid = fork();

        if (pid == 0) {
            // child process
            printf("Child %d started. PID = %d\n", i + 1, getpid());
            sleep(2); // simulate work
            printf("Child %d finished. PID = %d\n", i + 1, getpid());
            return 0; // exit child
        }
    }

    // parent process waits for all child
    for (int i = 0; i < NUM_CHILDREN; i++) {
        wait(NULL); // collect exit status of children to prevent zombie processes
    }

    printf("Parent finished all the children. PID = %d\n", getpid());
    return 0;
}