#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main method
 *
 * @argc: Amount of arguments
 * @argv: Program name
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res, a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(argv[2]);

	res = f(a, b);

	printf("%d\n", res);
	return (0);
}
