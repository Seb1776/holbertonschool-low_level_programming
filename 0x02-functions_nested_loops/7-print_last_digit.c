#include "holberton.h"

/**
 * print_last_digit - prints last digit of n
 *
 * @n: the integer
 *
 * Return: return last digit of n
 **/

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
