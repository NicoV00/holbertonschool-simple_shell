#include "main.h"

/**
* main - A function that runs our shell.
* @ac: The number of inputed arguments.
* @av: The pointer to array of inputed arguments.
* @env: The pointer to array of enviromental variables.
* Return: Always 0.
**/
int main(int ac, char **av, char **env)
{
		char *buffer = NULL, **command = NULL;
		size_t buf_size = 1024;
		ssize_t chars_readed = 0;
		int cicles = 0;
		(void)ac;

		while (1)
		{
		cicles++;
		prompt();
		signal(SIGINT, handle);
		chars_readed = getline(&buffer, &buf_size, stdin);
		if (chars_readed == EOF)
			_EOF(buffer);
		else if (*buffer == '\n')
			free(buffer);
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
				print_env(env);
			else
				create_process(cmd, av[0], env, cycle);
			_free(cmd);
			cmd = NULL;
		}

	{
		buffer[_strlen(buffer) - 1] = '\0';
		command = tokenize(buffer, " \0");
		free(buffer);
		if (_strcmp(command[0], "exit") != 0)
			shell_exit(command);
		else if (_strcmp(command[0], "cd") != 0)
			change_dir(command[1]);
		create_child(command, av[0], env, cicles);
	}
	fflush(stdin);
	buffer = NULL, buf_size = 0;

	}
	if (chars_readed == -1)
	return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}


/**
 * exit_shell - Function that exits the shell.
 * @command: Pointer to tokenized command.
 * Return: Nothing.
 **/
void exit_shell(char **command)
{
	int exit_shell = 0;

	if (command[1] == NULL)
	{
		_free(command);
		exit(EXIT_SUCCESS);
	}

	exit_shell = _atoi(command[1]);
	_free(command);
	exit(exit_shell);
}

/**
 * end_of_file - Function that handles EOF signal.
 * @buffer: Buffer to be freed.
 * Return: Nothing.
 **/
void _EOF(char *input)

/**
* prompt - A function that prints the prompt
* Return: Nothing
**/

void prompt(void)

{
	if (isatty(STDIN_FILENO))
	write(STDOUT_FILENO, "hsh>>", 5);
}

/**
* handle - A function to handle Ctr + C signal.
* @signals: The signal to handle.
* Return: Nothing
**/

void handle(int signals)
{
	(void)signals;
	write(STDOUT_FILENO, "\nhsh>> ", 7);
}


/**
* _EOF - A function that chaecks if buffer is EOF
* @buffer: The pointer to the input string.
* Return: Nothing
**/

void _EOF(char *buffer)
{

			if (buffer)
			{
				free(buffer);
				buffer = NULL;
			}

	if(isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "Sshell $ ", 9 );

		if (buffer)
		{
			free(buffer);
			buffer = NULL;
		}


			if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
			free(buffer);
			exit(EXIT_SUCCESS);

}

/**
* shell_exit - A function that exits the shell
* @command: The pointer to tokenized command
* Return: Nothing
**/

void shell_exit(char **command)
{

(void)signals;
	write(STDOUT_FILENO, "\nSshell $ ", 11);
=======
		int sta_tus = 0;

		if (command[1] == NULL)
		{
		free_dp(command);
		exit(EXIT_SUCCESS);
		}

		sta_tus = _atoi(command[1]);
		free_dp(command);
		exit(sta_tus);
}
