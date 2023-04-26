#ifndef main_h
#define main_h

#define MAX_INPUT_LENGTH 1024
#define MAX_TOKENS 64

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;

char* read_input(void);
char** parse_input(char* input);
void execute_command(char** tokens);
void free_tokens(char** tokens, int token_count);
char* strdup(const char* s);
size_t strlen(const char* s);

#endif
