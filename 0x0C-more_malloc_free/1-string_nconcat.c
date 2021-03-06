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
 * string_nconcat - concatenates two strings untill the n first letters
 * of string 2.
 * @s1: String 1.
 * @s2: String 2.
 * @n: Number of characters of string 2.
 * Return: Pointer shall point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat = NULL;
	unsigned int a, b, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = _strlen(s1);
	b = _strlen(s2);

	if (n > b)
		n = b;

	concat = malloc(sizeof(char) * (a + n + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
