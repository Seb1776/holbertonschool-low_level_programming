#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - Count the length of a string.
 * @s: String.
 * Return: Length.
 */
unsigned int _strlen(char *s)
{
	unsigned int c;

	for (c = 0; s[c]; c++)
	{ }

	return (c);
}

/**
 * _strdup - Duplicate two strings
 *
 * @str: Given string
 * Return: Two equal strings
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *d;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);
	d = malloc(sizeof(char) * (size + 1));

	if (d == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		d[i] = str[i];

	return (d);
}
