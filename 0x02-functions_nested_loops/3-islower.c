#include "holberton.h"

/**
 * _islower - check if the character c is lowercase or uppercase
 * @n: The character to evaluate
 *
 * Return: On n is lowercase 0 (Success)
 */

int _islower(int n)
{
	if (n >= 96 && n <= 123)
		return (1);

	else
		return (0);
}
