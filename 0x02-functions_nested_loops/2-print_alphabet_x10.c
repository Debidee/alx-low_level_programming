#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	char i, q;

	for (q = 0; q < 10; q++)
	{
		for (i = 'a'; i <= 'z'; i++)

		_putchar(i);
	_putchar('\n');
	}
}
