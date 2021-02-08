#include "holberton.h"
/**
 * _abs - changes the given value n to its absolute value
 * @n: The integer to evaluate
 *
 * Return: n value absolute value
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);

	else if (n < 0)
		return (-n);

	return (0);
}
