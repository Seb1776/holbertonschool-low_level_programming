#include "holberton.h"
/**
 * print_diagonal - prints a diagonal line made of \.
 * @n: given number of \
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n >= 1)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (b == a)
					_putchar(92);

				else
					_putchar(' ');
			}

		_putchar('\n');

		}
	}

	else
		_putchar('\n');
}
