#include "holberton.h"
/**
 * _strstr - Copy str
 * @haystack: large str
 * @needle: str to find
 *
 * Return: equals strs.
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b, c, size;

	for (size = 0; needle[size]; size++)
	{ }

	for (a = 0; haystack[a]; a++)
	{
		c = 0;

		for (b = 0; needle[b]; b++)
		{
			if (haystack[a + b] == needle[b] && haystack[a + b] != '\0')
				c++;
			else
			{
				c = 0;
				break;
			}
		}

		if (c == size)
			return (&haystack[a]);
	}

	return (0);
}
