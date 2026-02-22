// parent handles signal (ctrl + c) and tells children to exit
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

void handle_signal(int sig);

pid_t child_pid;

int main(void) {
    child_pid = fork();


    if (child_pid > 0) {
        // parent process
        signal(SIGINT, handle_signal); // now child_pid is set
        wait(NULL);
        printf("Parent exiting safely.\n");
    }
    else {
        // child process
        while(1) {
            printf("Child running...\n");
            sleep(1);
        }
    }

    return 0;
}

void handle_signal(int sig) {
    printf("\nParent detected Ctrl + C! Sending signal to child %d\n", child_pid);
    fflush(stdout); // flush immediately
    kill(child_pid, SIGTERM); // terminate the child process
}