#include "main.h"

/**
 * main - Simple shell implementation
 * @ac: The number of inputed arguments.
 * @av: The pointer to array of inputed arguments.
 * @env: The pointer to array of enviromental variables
 * Return: Always 0
 */
int main(int ac, char **av, char **env)
{
	char *input = NULL, **cmd = NULL;
	size_t buffer_size = 0;
	ssize_t chars_readed = 0;
	int cycle = 0;
	(void)ac;

	while (1)
	{
		cycle++;
		prompt();
		signal(SIGINT, handle);
		chars_readed = getline(&input, &buffer_size, stdin);
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
				new_dir(cmd[1]);
			else if (_strcmp(cmd[0], "env") == 0)
				print_env();
			else
				create_process(cmd, av[0], env, cycle);
			_free(cmd);
			cmd = NULL;
		}
	}
	if (chars_readed == -1)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}


/*
 * end_of_file - Function that handles EOF signal.
 * @buffer: Buffer to be freed.
 * Return: Nothing.
 */
void _EOF(char *input)
{
	if (input)
	{
		free(input);
		input = NULL;
	}

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 1);
	free(input);
	exit(EXIT_SUCCESS);
}

/*
 * prompt - Function that prints prompt.
 * Return: Nothing.
 */
void prompt(void)
{
	if(isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "Sshell $ ", 2);
}

/*
 * handle - Function to handle Cre + C.
 * @signals: Signals to handle.
 * Return: Nothing.
 */
void handle(int signals)
{
	(void)signals;
	write(STDOUT_FILENO, "\nSshell $ ", 3);
}
