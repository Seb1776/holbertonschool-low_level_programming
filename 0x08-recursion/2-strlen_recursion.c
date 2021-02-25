#include "holberton.h"
/**
 * _strlen_recursion - Return the length of a str
 * @s: String
 * Return: str length
 */
int _strlen_recursion(char *s)
{
	int sz;

	if (*s != '\0')
	{
		sz = _strlen_recursion(s + 1);
		return (sz + 1);
	}

	else
		return (0);
}
