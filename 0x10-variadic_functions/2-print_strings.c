#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints an indefinite number of strings
 * @separator: A comma with a space to separate strings
 * @n: Amount of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (!s)
			printf("(nil)");

		else
		{
			printf("%s", s);

			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ap);
}
