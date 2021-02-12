#include "holberton.h"
/**
 * print_line - print n number of lines.
 * @n: given number of lines
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n >= 1)
		for (i = 0; i < n; i++)
			_putchar('_');

	_putchar('\n');
}
