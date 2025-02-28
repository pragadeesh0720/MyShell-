#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.h"

#define MAX_ARGS 64  // Max command arguments

char **parse_input(char *input) {
    char **args = malloc(MAX_ARGS * sizeof(char *));  // Allocate memory for arguments
    char *token;
    int i = 0;

    token = strtok(input, " ");  // Split input by spaces
    while (token != NULL) {
        args[i++] = token;
        token = strtok(NULL, " ");
    }
    args[i] = NULL;  // NULL-terminate the array
    return args;
}
