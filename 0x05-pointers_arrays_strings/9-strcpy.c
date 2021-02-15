#include "holberton.h"
/**
 * _strcpy - Recreated strcpy function
 *
 * @dest: Pasted string
 * @src: Source string
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
