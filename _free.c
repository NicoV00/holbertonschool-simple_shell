#include "main.h"

/*
 *  _free - function that frees memory
 *  @command: pointer to allocated memory
 *  Return: void.
 */

void _free(char **command)
{
	size_t i = 0;

	if (command == NULL)
		return;

	while (command[I])
	{
		free(command[i]);
		i++;
	}

	if (command[i] == NULL)
		free(command[i];
	free(command);
}
