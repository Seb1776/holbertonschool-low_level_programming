#include "holberton.h"
/**
 * _strcmp - Binary comparison
 *
 * @s1: First char
 * @s2: Second char
 *
 * Return: Concatenated string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;

		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
