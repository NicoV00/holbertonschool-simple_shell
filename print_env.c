#include "main.h"

/*
 * print_env - Function to print all enviromental variables.
 * @env: pointer to environmental variable.
 * Return: Nothing.
 */

void print_env(char **env)
{
	size_t i =0; len = 0;

	while (env[i])
	{
		len = _strlen(env[i]);
		write(STDOUT_FILENO, env[i], len);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}	
