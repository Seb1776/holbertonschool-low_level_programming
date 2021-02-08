#include <stdio.h>
#include "holberton.h"
/**
 * _isalpha - check if c is an alphabetic character
 * @c: The character to evaluate
 *
 * Return: On c is alpha 1 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
