#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the largest prime factor of 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long number;
	float temp, sqrt_number;
	int counter;

	number = 612852475143;

	sqrt_number = number / 2;
	temp = 0;

	while (sqrt_number != temp)
	{
		temp = sqrt_number;
		sqrt_number = ((number / temp) + temp) / 2;
	}

	for (counter = 3; counter <= sqrt_number + 1; counter = counter + 2)
		if (number % counter == 0)
			number = number / counter;

	printf("%ld\n", number);

	return (0);
}
