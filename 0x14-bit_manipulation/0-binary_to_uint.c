#include "holberton.h"
int _strlen(const char *s);

/**
 * _strlen - Count the length of a string.
 * @s: String.
 *
 * Return: Length.
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{ }

	return (i);
}

/**
 * binary_to_uint - Convert a binary to int
 * @b: Pointer to a string
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;
	unsigned int j = 1;

	if (b == NULL)
		return (0);

	i = _strlen(b) - 1;

	for ( ; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			n += j;

		j *= 2;
	}

	return (n);
}
