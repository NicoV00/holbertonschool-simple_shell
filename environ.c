#include "main.h"
/**
* getenviroment - gets the env variable needed
* @name: name of the env variable
* @environ: env variables
* Return: the line with the env variable
**/

char *getenviroment(char *name, char **environ)
{
		int i, j, k;

		k = _strlen(name);
		for (i = 0; environ[i]; i++)
		{
		for (j = 0; environ[i][j] == name[j]; j++)
		{
		}
		if (j == k && environ[i][j] == '=')
		return (environ[i]);
		}
		return (NULL);
}
