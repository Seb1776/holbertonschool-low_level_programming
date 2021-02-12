#include "holberton.h"
/**
 * print_square - print a square of size x size.
 * @size: given number of squares
 *
 * Return: void.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size >= 1)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
