#include <stdio.h>
#include "holberton.h"
/**
 * print_triangle - manages all thebehaviour of making atriangle.
 * @size: height of the triangle to print
 *
 * Return: void.
 */
void print_triangle(int size)
{
	if (size >= 1)
	{
		int amountOfSpace, amountOfHashtag, i;
		int currentHashtags;
		int nextAmountOfSpace;

		amountOfSpace = size - 1;
		amountOfHashtag = size - amountOfSpace;
		nextAmountOfSpace = amountOfSpace - 1;
		currentHashtags = amountOfHashtag;

		for (i = 0; i < size; i++)
		{
			for ( ; amountOfSpace > 0; amountOfSpace--)
				_putchar(' ');

			for ( ; currentHashtags > amountOfSpace; amountOfSpace++)
				_putchar('#');

			amountOfSpace = nextAmountOfSpace;
			nextAmountOfSpace--;
			currentHashtags++;

			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
