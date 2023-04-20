#include "main.h"

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
