#include "search_algos.h"

/**
 * linear_search - Linear algorithm
 *
 * @array: matrix of values
 * @size: lenght of value
 * @value: value to search in the array
 *
 * Return: -1 if not found or position of array with found value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
