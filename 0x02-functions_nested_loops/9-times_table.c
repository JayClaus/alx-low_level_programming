#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * Return: times table
 */

void times_table(void)
{
	int r;
	int c;
	int d;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');

		for (c = 1; c <= 9; c++)
		{
			_putchar(',');
			_putchar(' ');
			d = (r * c);

			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + '0');

			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
