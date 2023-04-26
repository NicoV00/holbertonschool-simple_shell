#include "main.h"

/**
 * main - Simple shell implementation
 *
 * Return: Always 0
 */

int main(void)
{
	char *input;
	char **tokens;

	while (1)
	{
		printf("Sshell $ ");

		input = read_input();
		if (!input)
		{
			printf("\n");
			break;
		}

		tokens = parse_input(input);
		if (tokens)
		{
			execute_command(tokens);
			free_tokens(tokens, MAX_TOKENS);
		}

		free(input);
		input = NULL;
	}

	return (0);
}
