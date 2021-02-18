#include "holberton.h"
/**
 * string_toupper - Puts all lowercase letters in uppercase
 *
 * @n: Given String
 *
 * Return: All lowercased letters in uppercase
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i])
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] = n[i] - 32;

		i++;
	}

	return (n);
}
