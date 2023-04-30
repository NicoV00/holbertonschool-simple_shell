#include "main.h"

/**
 * tokenize - Splits a string into tokens.
 * @input: The input string.
 * @delimiter: The delimiter used to split the string.
 * x: character
 * Return: A pointer to an array of tokens.
 **/

char **tokenize(char *input, const char *x)
{
	char *token = NULL, **commands = NULL;
	size_t bufsize = 0;
	int i = 0;

	if (input == NULL)
		return (NULL);

	bufsize = _strlen(input);
	commands = malloc((bufsize + 1) * sizeof(char *));
	if (commands == NULL)
	{
		perror("Unable to allocate buffer");
		free(input);
		_free(commands);
		exit(EXIT_FAILURE);
	}

	token = strtok(input, x);
	while (token != NULL)
	{
		commands[i] = malloc(_strlen(token) + 1);
		if (commands[i] == NULL)
		{
			perror("Unable to allocate buffer");
			_free(commands);
			return (NULL);
		}

		_strcpy(commands[i], token);
		token = strtok(NULL, x);
		i++;
	}

	commands[i] = NULL;
	return (commands);
}
