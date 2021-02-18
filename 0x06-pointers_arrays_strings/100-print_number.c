#include "holberton.h"
/**
 * print_number - prints a 4 digit number using _putchar
 *
 * Description: Writes times table up to imput not exceeding 15
 *
 * @n: Given number
 *
 * Return: Nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
