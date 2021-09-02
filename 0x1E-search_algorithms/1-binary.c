#include "search_algos.h"

/**
 * print_array - function for print array
 *
 * @array: pointer to array
 * @left: left position
 * @right: rigth position
 *
 * Return: void
 */

void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");

	for (left = left; left < right; left++)
		printf("%d, ", array[left]);

	printf("%d\n", array[left]);
}

/**
 * binary_search - algorithm f binary search
 *
 * @array: pointer to array
 * @size: length to array
 * @value: value to search
 *
 * Return:  position in array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1, left = 0, middle = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;

		if (value == array[middle])
			return (middle);

		else if (value < array[middle])
			right = middle - 1;

		else if (value > array[middle])
			left = middle + 1;
	}

	return (-1);
}
