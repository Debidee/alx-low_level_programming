#include "main.h"
/**
 * main - putchar
 * Description - prints _putchar
 * Return: 0 (Success)
 */

int main(void)
{
	char text = "_putchar"
	int a;

	for (a = 0; a < 9; a++)
	{
		_putchar(text[a]);
	}
	_putchar('\n');

	return (0);
}
