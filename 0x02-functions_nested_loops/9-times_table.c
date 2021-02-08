#include "holberton.h"
/**
 * times_table - prints all tables
 *
 * Return: 0 (Success)
 */
void times_table(void)
{
	int numa, numb, numc, numd, nume;

	for (nume = 0; nume <= 9; nume++)
	{
		for (numa = 0; numa <= 9; numa++)
		{
			numb = nume * numa;
			numc = numb / 10;
			numd = numb % 10;
			if (numa == 0)
			{
				_putchar(0 + '0');
			}
			else if (numc == 0 && numa != 0)
			{
				_putchar(' ');
				_putchar(numd + '0');
			}
			else
			{
				_putchar(numc + '0');
				_putchar(numd + '0');
			}
			if (numa != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
