// Fork explosion tree: total 8 processes will exist because each loop doubles the processes
#include <stdio.h>
#include <unistd.h> 
#include <sys/wait.h>

int main(void) {
    for (int i = 0; i < 3; i++) {

        printf("Process %d BEFORE fork at i = %d\n", getpid(), i);

        pid_t pid = fork();
        
        if (pid < 0) {
            printf("Fork failed.\n");
            return 1;
        }

        if (pid == 0) {
            // child process
            printf("    CHILD | PID: %d | PPID: %d | created at i = %d\n", getpid(), getppid(), i);
        }
        else if (pid > 0) {
            // parent process
            printf("    PARENT | PID: %d | PPID: %d | created at i = %d\n", getpid(), getppid(), i);
        }

        printf("Process %d AFTER fork at i=%d\n", getpid(), i);
    }

    return 0;
}