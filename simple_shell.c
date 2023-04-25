#include "main.h"

int main(void)
{
	char* input;
	char** tokens;

	while (1)
	{
		printf("Sshell $ ");

		input = read_input();
		if (!input)
		{
			printf("\n");
			break; // end of input, exit shell
		}

		tokens = parse_input(input);
		if (tokens)
		{
			execute_command(tokens);
			free_tokens(tokens, MAX_TOKENS);
		}

		free(input);
	}
	
	return 0;
}
