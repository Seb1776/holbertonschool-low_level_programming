#include "holberton.h"
/**
 * print_sign - check if c is positive, negative or zero
 * @c: The integer to evaluate
 *
 * Return: On c is positive 1 (Success)
 * On zero, 0 is returned
 * On negatuve, -1 is returned
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (c == 0)
	{
		_putchar ('0');
		return (0);
	}

	else
	{
		_putchar ('-');
		return (-1);
	}
}
