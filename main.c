#include "main.h"

/**
 * main - Simple shell implementation
 * @ac: The number of inputed arguments.
 * @av: The pointer to array of inputed arguments.
 * @env: The pointer to array of enviromental variables
 * Return: Always 0
 */

int main(void)
{
	char *input = NULL, char **cmd = NULL;
	size_t buf_size = 0;
	ssize_t chars_readed = 0;
	int cycle = 0;
	(void)ac;

	while (1)
	{
		count++;
		prompt();
		signal(SIGINT, handle);
		chars_readed = getline(&input, &buf_size, stdin);
		if (chars_readed == EOF)
			_EOF(input);
		else if (*input == '\n')
			free(input);
		else
		{
			input[_strlen(input) - 1] = '\0';
			cmd = tokenize(input, "\0");
			free(input);
			if (_strcmp(cmd[0], "exit") != 0)
				exit_shell(cmd);
			else if (_strcmp(cmd[0], "cd") != 0)
				change_dir(cmd[1]);
			else if (_strcmp(cmd[0], "env") == 0)
				print_env();
			else
				child_creation(cmd, av[0], env, cycle);
			_free(cmd);
			cmd = NULL;
		}
	}
	if (chars_reades == -1)
		return (EXIT_FAILURE)
	return (EXIT_SUCCESS);
}
