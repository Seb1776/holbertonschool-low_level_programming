#include "holberton.h"

/**
 * set_bit - Set the value of a bit
 * @n: Pointer to number
 * @index: The index of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max;
	const int bits = 8;
	int value = 1;

	max = (sizeof(unsigned long) * bits);

	if (index > max)
		return (-1);

	value <<= index;

	*n |= value;

	return (1);
}
