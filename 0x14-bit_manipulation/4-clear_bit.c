#include "holberton.h"

/**
 * clear_bit - Set the value of a bit
 * @n: Pointer to number.
 * @index: The index of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max;
	const int bits = 8;
	int i = 1;

	max = (sizeof(unsigned long) * bits);

	if (index > max)
		return (-1);

	i <<= index;
	i = (~i);

	*n &= i;

	return (1);

}
