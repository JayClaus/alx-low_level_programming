#include "main.h"
/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4
 * _putchar - prins whats written in the function
 */
void print_most_numbers(void)
{
	int num;

	_putchar;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_putchar('\n');
}
