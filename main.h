#ifndef main_h
#define main_h

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>

/* Excutable */
void execute(char **command, char *name, char **env, int cicles);
char **_getPATH(char **env);
void print_env(char **env);
void mserror(char *name, int cicles, char **command);

/* Functions shell */
int main(int ac, char **av, char **env);
void prompt(void);
void _EOF(char *buffer);
void handle(int signals);
void exit_shell(char **command);
 
/* child process creation */
void create_process(char **command, char *name, char **env, int cicles);
int new_dir(const char *path);

/* tokenize */
char **tokenize(char *input, const char *x);

/* free */
void _free(char **command);
void free_exit(char **command);

/* Auxiliar functions */
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *_strcpy(char *copyed, char *copy);
char *_strcat(char *dest, char *src);
unsigned int _strlen(char *str);

/* Global variable */
extern char **env;

#endif
