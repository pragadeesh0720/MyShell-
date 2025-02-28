#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "parser.h"
#include "executor.h"
#include "builtins.h"

#define BUFFER_SIZE 1024  // Max input size

int main() {
    char input[BUFFER_SIZE];  // Store user input
    char **args;              // Tokenized input

    while (1) {
        printf("MyShell> ");  // Shell prompt

        if (!fgets(input, BUFFER_SIZE, stdin)) {
            perror("fgets error");
            exit(1);
        }

        input[strcspn(input, "\n")] = 0;  // Remove newline character

        if (strlen(input) == 0) continue;  // Ignore empty input

        args = parse_input(input);  // Tokenize input
        if (!args) continue;

        if (!execute_builtin(args)) {  // Check if it's a built-in command
            execute_command(args);  // Execute system command
        }

        free(args);
    }
    return 0;
}
