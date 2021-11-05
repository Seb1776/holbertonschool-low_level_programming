#include "search_algos.h"

/**
 * interpolation_search - Search for the first occurrence of a value
 *               within an array using the interpolation search algorithm.
 * @array: The array to be searched.
 * @size: The size of the array.
 * @value: The value to be searched within the array.
 *
 * Return: The index of the value searched if found. Return -1 otherwise.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (1)
	{
		if (low == high)
		{
			if (value == array[low])
				return (low);

			return (-1);
		}

		pos = low + (((double)(high - low) / (array[high] - array[low])) *
		     (value - array[low]));

		if (pos > high)
			break;

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;

		else if (array[pos] > value)
			high = pos - 1;

		else
			return (pos);
	}

	printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}
