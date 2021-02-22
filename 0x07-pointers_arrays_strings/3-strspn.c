#include "holberton.h"
/**
 * _strspn - Compare and count char
 * @s: str length
 * @accept: given str
 *
 * Return: k.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
			{
				k++;
				break;
			}

		if (accept[j] != s[i])
			break;
	}

	return (k);
}
