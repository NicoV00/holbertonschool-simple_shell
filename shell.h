#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void parse_input(char *input);
#endif /* SHELL_H */

#include "shell.h"
void parse_input(char *input)
{
char *token = strtok(input, " "); // split the input into arguments using space as delimiter
while (token != NULL)
{
token = strtok(NULL, "");
}
system(input); // execute the command
}
