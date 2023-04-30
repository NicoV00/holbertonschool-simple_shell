#include "main.h"

/**
* _getPATH - A function to gets the full value from
* enviromental variable PATH
* @env: The pointer to enviromental variables
* Return: All tokenized pathways for commands
**/

char **_getPATH(char **env)
{
	char *pathvalue = NULL, **pathways = NULL;
	unsigned int i = 0;

	pathvalue = strtok(env[i], "=");
	while (env[i])
	{
		if (_strcmp(pathvalue, "PATH"))
		{
			pathvalue = strtok(NULL, "\n");
			pathways = tokenize(pathvalue, ":");
			return (pathways);

		}
		i++;
		pathvalue = strtok(env[i], "=");
	}
	return (NULL);
}


/**
* execute - that executes a command
* @command: The pointer to tokienized command
* @name: The name of the shell
* @env: The pointer to the enviromental variables
* @cicles: Number of executed cicles
* Return: Nothing
**/

void execute(char **command, char *name, char **env, int cicles)
{
		char **pathways = NULL, *full_path = NULL;
		struct stat st;
		unsigned int i = 0;

		if (_strcmp(command[0], "env") != 0)
			print_env(env);
		if (stat(command[0], &st) == 0)
		{
			if (execve(command[0], command, env) < 0)
			{
				perror(name);
				free_exit(command);
			}
		}
		else
		{

			pathways = _getPATH(env);
			while (pathways && pathways[i])
			{
				full_path = _strcat(pathways[i], "/");
				i++;
				if (stat(full_path, &st) == 0)
				{
				if (execve(full_path, command, env) < 0)
				{
					perror(name);
					free_dp(pathways);
					free_exit(command);
				}
				return;
			}
		}
			mserror(name, cicles, command);
			free_exit(command);
		}
}

/**
* mserror - A function that prints message not found
* @name: The name of the shell
* @cicles: Number of cicles
* @command: The pointer to tokenized command
* Return: Nothing
**/

void mserror(char *name, int cicles, char **command)
{
		char c;

		c = cicles + '0';
		write(STDOUT_FILENO, name, _strlen(name));
		write(STDOUT_FILENO, ": ", 2);
		write(STDOUT_FILENO, &c, 1);
		write(STDOUT_FILENO, ": ", 2);
		write(STDOUT_FILENO, command[0], _strlen(command[0]));
		write(STDOUT_FILENO, ": not found\n", 12);
}
