#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - check the the entry and sums it's way to 98
 *
 * @i: Given number
 * Return: Always 0.
 */

void print_to_98(int i)
{
	if (i <= 98)
		for (i = i; i <= 97; i++)
			printf("%d, ", i);
	else
		for (i = i; i > 98; i--)
			printf("%d, ", i);
	printf("98\n");
}
