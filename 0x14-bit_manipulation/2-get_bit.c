#include "holberton.h"

/**
 * get_bit - Get the value of a bit at a given index
 * @n: Number to evaluate
 * @index: Index to get the value
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max;
	const int bits = 8;
	int bn;

	max = (sizeof(unsigned long) * bits);

	if (index > max)
		return (-1);

	for (; index != 0; index--)
		n >>= 1;

	bn = n & 1;

	return (bn);
}
