#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: Minimum value.
 * @max: Maximun value.
 * Return: Pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *range = NULL;
	int i;

	if (min > max)
		return (NULL);

	range = malloc(sizeof(int) * (max - min + 1));

	if (range == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		range[i] = min;

	return (range);
}
