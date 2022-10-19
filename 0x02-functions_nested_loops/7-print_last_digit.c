#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int nld)
{
	int t;

	t = (nld % 10);
	if (t < 0)
	{
	t = (-1 * t);
	}

	_putchar(t + '0');
	return (t);
}
