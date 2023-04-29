#include "main.h"

/*
 * _strcpy - Function thta copies string to string.
 * @copyed: Pointer to copy.
 * @copy: Pointer to string to copy.
 * Return: Pointer to copied string.
 */
char *_strcpy(char *copyed, char *copy)
{
	char *x = copyed;

	while (*x)
		*copyed++ = *copy++;
	*copyed = '\0';
	return (x);
}

/*
 * _strcmp - A funtion that compares two strings.
 * @s1: First string to compare.
 * @s2: Ftring to compare.
 * Return: Integer.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);

	return (0);
}

/*
 * _strdup - Duplicates a string in memory.
 * @str: pointer to the string to duplicate.
 * Return: pointer to the duplicated string, or NULL.
 */
char *_strdup(char *str)
{
	int i, x;
	char *array;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	array = malloc(sizeof(char) * (i + 1));

	if (array == NULL)
		return (NULL);

	for (x = 0; x <= i; x++)
		array[x] = str[x];

	return (array);
}

/*
 * _strcat - Concatenate two strings.
 * @dest: String dest.
 * @src: String origin.
 * Return: Pointer to string.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';
	return (dest);
}

/*
 * _strlen - Calculates the length of a string.
 * @str: The string to calculate the length.
 * Return: The length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;

	return (len);
}
