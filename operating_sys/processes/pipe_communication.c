// Pipe communication: child calculates the sum of two numbers and the parent reads the result
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    int fd[2]; // pipe fd[0] = read, fd[1] = write
    pipe(fd); // pipe connects the two ends

    pid_t pid = fork();

    if (pid == 0)
    {
        // child
        close(fd[0]); // close reading end / child doesn't need to read from pipe
        int a = 5, b = 10;
        int sum = a + b;
        write(fd[1], &sum, sizeof(sum)); // send sum to parent
        close(fd[1]);
        return 0;
    }
    else {
        // parent
        close(fd[1]); // close writing end / parent doesn't need to write in pipe
        int result;
        read(fd[0], &result, sizeof(result)); // read sum from child
        close(fd[0]);
        printf("Parent received sum: %d\n", result);
        wait(NULL); // wait for child
    }

    return 0;
}