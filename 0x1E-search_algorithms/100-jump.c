#include "search_algos.h"

/**
 * jump_search - Search for the first occurrence of a value within an array
 *               using the jump search algorithm with the optimal step:
 *               sqrt(size).
 * @array: The array to be searched.
 * @size: The size of the array.
 * @value: The value to be searched within the array.
 *
 * Return: The index of the value searched if found. Return -1 otherwise.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, lo_idx, hi_idx;

	if (!array)
		return (-1);

	lo_idx = 0;
	hi_idx = step = sqrt(size);

	while (1)
	{
		printf("Value checked array[%lu] = [%d]\n", lo_idx, array[lo_idx]);

		if (hi_idx < size &&
		    !(value >= array[lo_idx] && value <= array[hi_idx]))
		{
			lo_idx = hi_idx;
			hi_idx += step;
		}

		else
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", lo_idx, hi_idx);

	for (; lo_idx < size; lo_idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", lo_idx, array[lo_idx]);

		if (value == array[lo_idx])
			return (lo_idx);
	}

	return (-1);
}
