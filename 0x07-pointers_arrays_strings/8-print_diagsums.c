#include <stdio.h>
/**
 * print_diagsums - Sums in diag
 * @a: array
 * @size: array size
 *
 * Return: dest.
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, k = 0;

	for (i = 0; i < size; i++)
		j += a[(size + 1) * i];

	for (i = 1; i <= size; i++)
		k += a[(size - 1) * i];

	printf("%d, %d\n", j, k);
}
