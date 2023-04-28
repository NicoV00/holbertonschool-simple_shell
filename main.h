#ifndef main_h
#define main_h

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>

/* Functions */
int execute(char **args, char *input, int status, int count);
char **tokenize_line(char *line);
char **tokenize(char *input, char *delimiter);
void free_grid(char **grid);
void print_env(void);
void prompt(void);
void handle(int signals);
void _EOF(char *buffer);
void exit_shell(char **command);

/* Auxiliar functions */
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
int _strlen(char *str);
int _atoi(char *s);

/* Global variable */
extern char **environ;

#endif
