#include "holberton.h"
void prt_binary_rec(unsigned long int n);

/**
 * prt_binary_rec - Prints the binary representation of a number.
 * @n: Number to print.
 *
 * Return: void
 */
void prt_binary_rec(unsigned long int n)
{
	short int b;

	if (n != 0)
	{
		prt_binary_rec(n >> 1);
		b = n & 1;
		_putchar(b + '0');
	}
}

/**
 * print_binary - Prints in binary
 * @n: Numbert to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n != 0)
		prt_binary_rec(n);
	else
		_putchar('0');
}
