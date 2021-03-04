#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Concatenate all the arguments of this program.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 * Return: String with all the arguments splits whit a new line.
 */
char *argstostr(int ac, char **av)
{
	int i, y, z = 0, a = 0;
	char *c;

	if (ac < 1 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (y = 0; av[i][y]; y++)
			a++;

	a += ac + 1;

	c = malloc(sizeof(char) * a);

	if (!c)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (y = 0; av[i][y]; y++)
			c[z++] = av[i][y];

		c[z++] = '\n';
	}

	c[z] = '\0';

	return (c);
}
