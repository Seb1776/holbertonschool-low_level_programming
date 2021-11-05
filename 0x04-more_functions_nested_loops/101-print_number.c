#include "holberton.h"

/**
 * print_number - prints a number using the _putchar function.
 *
 * @n: the number to be printed.
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num, divisor;
	int counter, total_digits;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	num = n;

	if (n == 0)
		total_digits = 1;

	else
	{
		total_digits = 0;

		while (num != 0)
		{
			num = num / 10;
			total_digits++;
		}
	}

	divisor = 1;

	for (counter = 1; counter < total_digits; counter++)
		divisor = divisor * 10;

	for (counter = 0; counter < total_digits; counter++)
	{
		_putchar((n / divisor) + '0');
		n = n % divisor;
		divisor = divisor / 10;
	}
}
