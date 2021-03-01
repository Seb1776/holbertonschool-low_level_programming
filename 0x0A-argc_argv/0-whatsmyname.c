#include "holberton.h"
#include <stdio.h>
/**
 * main - Main function
 * @argc: Parameter count
 * @argv: Program name
 *
 * Return: 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
