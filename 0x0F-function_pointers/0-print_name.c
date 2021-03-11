#include "function_pointers.h"
/**
 * print_name - Prints a given name
 *
 * @name: Name to print
 * @f: pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
