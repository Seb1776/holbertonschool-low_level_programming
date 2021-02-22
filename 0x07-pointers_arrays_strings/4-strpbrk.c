#include "holberton.h"
/**
 * _strpbrk - Find char, then display str
 * @s: str
 * @accept: chars to find
 *
 * Return: dest.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (&s[i]);

	return (0);
}
