#include "holberton.h"
/**
 * _sqrt_recursion - Calculate the natural square root of a number
 * @n: Number raw.
 * Return: Result.
 */
int _sqrt_recursion(int n)
{
	return (_squared(0, n));
}

/**
* _squared - Returns the natural square root of a number
* @a: Possible square
* @b: Number
* Return: Square root
*/

int _squared(int a, int b)
{
	if (a * a == b)
		return (a);

	else if (a * a >= 0)
		return (_squared(a + 1, b));

	else
		return (-1);
}
