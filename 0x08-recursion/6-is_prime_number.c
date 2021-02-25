#include "holberton.h"
/**
 * is_prime_number - Check if prime
 * @n: Number.
 * Return: Result.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Check if prime
 * @i: number
 * @j: multiple
 * Return: Result.
 */
int check_prime(int i, int j)
{
	if ((i % j == 0 && j < i) || i < 2)
		return (0);

	else if (i % j == 0 && i == j)
		return (1);

	else
		return (check_prime(i, j + 1));
}
