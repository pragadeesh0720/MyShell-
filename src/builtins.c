#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "builtins.h"

int execute_builtin(char **args) {
    if (strcmp(args[0], "exit") == 0) {
        exit(0);  // Exit the shell
    }
    if (strcmp(args[0], "cd") == 0) {
        if (args[1] == NULL) {
            fprintf(stderr, "cd: missing argument\n");
        } else {
            if (chdir(args[1]) != 0) {
                perror("cd error");
            }
        }
        return 1;  // Return success
    }
    return 0;  // Not a built-in command
}
