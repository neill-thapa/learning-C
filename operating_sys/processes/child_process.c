// creating a child process with fork() and make it print something
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t pid = fork();

    if (pid == 0) {
        // child process
        printf("I am the child!\n");
    }
    else if (pid > 0) {
        // parent process 
        printf("I am the parent.\n");
    }
    else {
        printf("Fork failed.\n");
    }

    return 0;
}