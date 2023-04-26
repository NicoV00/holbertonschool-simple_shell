#include "main.h"

/**
 * read_input - Read user input from stdin
 *
 * Return: Pointer to user input
 */

char *read_input(void)
{
	char *input = (char *) malloc(MAX_INPUT_LENGTH);

	if (!input)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	if (!fgets(input, MAX_INPUT_LENGTH, stdin))
	{
		free(input);
		return (NULL);
	}

	input[strcspn(input, "\n")] = '\0';

	return (input);
}

/**
 * parse_input - Parse user input into tokens
 * @input: User input string
 *
 * Return: Array of tokens
 */

char **parse_input(char *input)
{
	char **tokens;
	int token_count = 0;
	char *token;

	tokens = (char **) malloc(MAX_TOKENS * sizeof(char *));
	if (!tokens)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	token = strtok(input, " ");
	while (token)
	{
		tokens[token_count++] = token;
		if (token_count == MAX_TOKENS)
		{
			printf("Too many arguments\n");
			free_tokens(tokens, token_count);
			return (NULL);
		}

		token = strtok(NULL, " ");
	}

	tokens[token_count] = NULL;
	return (tokens);
}

/**
 * execute_command - Executes the command using execvp
 * @tokens: The parsed command tokens
 *
 * Return: void
 */

void execute_command(char **tokens)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("fork");
		return;
	}

	if (pid == 0)
	{
		if (execvp(tokens[0], tokens) == -1)
		{
			perror("execvp");
			exit(EXIT_FAILURE);
		}
	}

	else
	{
		int status;

		waitpid(pid, &status, 0);
	}
}

/**
 * free_tokens - Frees the memory used by tokens
 * @tokens: The array of tokens to be freed
 * @token_count: The number of tokens in the array
 *
 * Return: void
 */

void free_tokens(char **tokens, int token_count)
{
	int i;
	char *token;

	for (i = 0; i < token_count; i++)
	{
		token = tokens[i];
		free(token);
	}
	free(tokens);
}
