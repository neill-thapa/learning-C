// demonstrates the controlled fork instead of explosion
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>

#define CHILD_NUM 5

int main(void) {
    srand(time(NULL));

    for (int i = 0; i < CHILD_NUM; i++) {
        pid_t pid = fork();

        if (pid < 0) {
            printf("Fork failed.\n");
            return 1;
        }
        else if (pid == 0) {
            // child process
            printf("Child %d started... PID: %d\n", i + 1, getpid());
            sleep(rand() % 3 + 1); 
            printf("Child %d finished... PID: %d\n", i + 1, getpid());
            exit(0); // prevent the child from looping
        }
        else {
            // parent process
            continue; // keep creating next child
        }
    }

    // parent waits for the child
    for (int i = 0; i < CHILD_NUM; i++) {
        wait(NULL);
    }

    printf("All done\n");
    return 0;
}