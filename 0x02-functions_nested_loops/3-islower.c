#include "main.h"
/**
 * _islower - check characte case
 * @c: input character
 * Description: function uses _putchar
 * Return: 1 if lowercase
 */

int _islower(int c)
{

	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)

		return (1);
	}

		return (0);

}
