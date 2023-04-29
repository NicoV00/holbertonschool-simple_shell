#include "main.h"

/**
* _strlen - length of a string
* @str: string to count
* Return: length of the string
**/

int _strlen(char *str)
{
		int i;

		for (i = 0; str[i]; i++)
		{
		}

		return (i);
}

/**
* _strcmp - A funtion that compares two strings
* @s1: string 1
* @s2: string 2
* Return: 1 if strings are the same, 0 if not
**/

int _strcmp(char *s1, char *s2)
{
		unsigned int i = 0;

		while (s1[i])
		{
		if (s1[i] != s2[i])
		return (0);
		i++;
		}

		return (1);
}

/**
* _strcpy - A function that copies a string to another string
* @dest: The pointer to the copyed string
* @src: The pointer to string to copy for
* Return: A pointer to copied string
**/

char *_strcpy(char *dest, char *src)
{
		char *aux = dest;

		while (*src)
		*dest++ = *src++;
		*dest = '\0';
		return (aux);
}
