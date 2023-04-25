#include "main.h"

int main()
{
    char *input = NULL;
    size_t len = 0;
    
    while (1)
    {
        printf("Sshell $ ");
        if (getline(&input, &len, stdin) != -1)
        {
            input[strlen(input)-1] = '\0'; // eliminando el '\n' al final de la entrada
            if (strcmp(input, "exit shell") == 0)
            {
                break; // salir del bucle si la entrada es "exit"
            }
            parse_input(input); // llamar a la función para dividir la entrada en argumentos
        }
        else
        {
        break; // salir del bucle si getline() devuelve -1 (EOF)
        }
    }

    free(input);

    return 0;
}

/**
 * parse_input - divide la entrada en argumentos utilizando el espacio como delimitado
 * @strtok
 * Return: void
 */

void parse_input(char *input)
{
    char *token = strtok(input, " "); // dividir la entrada en argumentos utilizando el espacio como delimitador
    while (token != NULL)
    {
        token = strtok(NULL, " ");
    }
    system("ls"); // ejecuta comando "ls"
}
