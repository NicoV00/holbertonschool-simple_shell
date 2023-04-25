#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char* read_input(void)
{
	char* input = (char*) malloc(MAX_INPUT_LENGTH);
	if (!input)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	
	if (!fgets(input, MAX_INPUT_LENGTH, stdin))
	{
		free(input);
		return NULL; // End of input
	}
	
	input[strcspn(input, "\n")] = '\0'; // Remove newline characte
	
	return input;
}

char** parse_input(char* input)
{
	char** tokens = (char**) malloc(MAX_TOKENS * sizeof(char*));
	if (!tokens)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	
	int token_count = 0;
	char* token = strtok(input, " ");
	while (token)
	{
		tokens[token_count++] = token;
		if (token_count == MAX_TOKENS)
		{
			printf("Too many arguments\n");
			free_tokens(tokens, token_count);
			return NULL;
		}
		
		token = strtok(NULL, " ");
	}
	tokens[token_count] = NULL; // NULL-terminate the array
	
	return tokens;
}

void execute_command(char** tokens)
{
	pid_t pid = fork();
	if (pid == -1)
	{
		perror("fork");
		return;
	}
	
	if (pid == 0)
	{ // Child process
		if (execvp(tokens[0], tokens) == -1)
		{
			perror("execvp");
			exit(EXIT_FAILURE);
		}
	}
	
	else
	{ // Parent process
		int status;
		waitpid(pid, &status, 0);
	}
}

void free_tokens(char** tokens, int token_count)
{
	for (int i = 0; i < token_count; i++)
	{
		free(tokens[i]);
	}
	free(tokens);
}
