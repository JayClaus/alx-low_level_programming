#include "main.h"

int _putchar(char c);

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	_putchar((i % 10) + '0');
	_putchar('\n');
}
