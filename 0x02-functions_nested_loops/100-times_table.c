#include "holberton.h"
/**
 * print_times_table - print times table up to input
 *
 * Description: Writes times table up to imput not exceeding 15
 *
 * @i: size of times table
 *
 * Return: Nothing
 */

void print_times_table(int i)
{
	int a, b, res;

	if (i <= 15 && i >= 0)
	{
		for (a = 0; a <= i; a++)
		{
			for (b = 0; b <= i; b++)
			{
				res = (a * b);
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100 && b != 0)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar((res % 10) + '0');
				}
				else
					_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
