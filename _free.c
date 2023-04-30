#include "main.h"

/**
*  _free - Function that frees memory
*  @command: Pointer to allocated memory
*  Return: Void.
**/

void _free(char **command)
{
	size_t i = 0;

	if (command == NULL)
		return;

	while (command[i])
	{
		free(command[i]);
		i++;
	}

	if (command[i] == NULL)
		free(command[i]);
	free(command);
}

/**
* free_exit - A function that frees all the memory allocated and exit.
* @command: The pointer to allocated command memory to free.
* Return: Nothing.
**/

void free_exit(char **command)
{
	size_t i = 0;

	if (command == NULL)
		return;

	while (command[i])
	{
		free(command[i]);
		i++;
	}

	if (command[i] == NULL)
		free(command[i]);
	free(command);
	exit(EXIT_FAILURE);
}
