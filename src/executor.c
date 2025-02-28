#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "executor.h"

void execute_command(char **args) {
    pid_t pid = fork();  // Create a new process

    if (pid < 0) {  // Error case
        perror("Fork failed");
        exit(1);
    }
    if (pid == 0) {  // Child process
        if (execvp(args[0], args) == -1) {  // Execute command
            perror("Command execution failed");
        }
        exit(1);
    } else {  // Parent process
        int status;
        waitpid(pid, &status, 0);  // Wait for child process
    }
}
