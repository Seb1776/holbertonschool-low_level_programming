#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, using malloc, and
 * the memory is set to zero
 * @nmemb: Number of elements.
 * @size: Size of each element.
 * Return: A pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arraylocat = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arraylocat = malloc(nmemb * size);

	if (arraylocat == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		arraylocat[i] = 0;

	return (arraylocat);
}
