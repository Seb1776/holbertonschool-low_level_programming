#include "holberton.h"
/**
 * _isdigit - check if the given char is a digit or not.
 * @c: given char
 *
 * Return: 0 if it's not digit or 1 if it is.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
