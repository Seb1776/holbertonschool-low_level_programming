#include <stdlib.h>
/**
 * create_array - Create an array of chars, then initialize it
 * with that specific char
 *
 * @size: Array's size
 * @c: Respective char
 * Return: Array of chars (or a string)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
