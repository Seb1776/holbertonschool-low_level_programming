#include "holberton.h"
/**
 * rev_string - Prints a reversed string
 *
 * @s: This is the new entry
 */
void rev_string(char *s)
{
	int length, a, c;

	char *begin, *end, temp;

	c = 0;

	while (*(s + c) != '\0')
		c++;

	length = c;

	begin = s;
	end = s;

	for (a = 0; a < length - 1; a++)
		end++;

	for (a = 0; a < length / 2; a++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
