#include "holberton.h"
/**
 * _isupper - check if the given char is upper or not.
 * @c: given char
 *
 * Return: 0 if lowercase or 1 if uppercase.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
