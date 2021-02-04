#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
		{}

		else
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
