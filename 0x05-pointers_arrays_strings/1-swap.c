#include "holberton.h"
/**
 * swap_int - Swap the values of a and b
 * @a: first given int
 * @b: second given int
 *
 * Return: 0 if it's not digit or 1 if it is.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
