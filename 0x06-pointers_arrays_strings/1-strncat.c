#include "holberton.h"
/**
 * _strncat - Concatenates two given strings(Alt. not-null-terminated ver.)
 *
 * @dest: First string
 * @src: Second string
 * @n: Length of bytes
 *
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{ }

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
