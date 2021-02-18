#include "holberton.h"
/**
 * reverse_array - Reverses a given array
 *
 * @a: Array
 * @n: Array length
 *
 * Return: Concatenated string
 */
void reverse_array(int *a, int n)
{
	int temp, revIndex, arrIndex;

	revIndex = 0;
	arrIndex = n - 1;

	while (revIndex < arrIndex)
	{
		temp = a[revIndex];
		a[revIndex] = a[arrIndex];
		a[arrIndex] = temp;

		revIndex++;
		arrIndex--;
	}
}
