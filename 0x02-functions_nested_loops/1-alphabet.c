#include "main.h"
/**
 *print_alphabet - A function that prints the alphabet in lowercase format
 * Return: 0
 */
void print_alphabet(void)
{
	char a;
	char z;
	char t;

	for (t = 'a'; t <= 'z';)
	{
	_putchar(t);
	t++;
	}
	_putchar('\n');
}
