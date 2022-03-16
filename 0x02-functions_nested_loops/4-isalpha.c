#include "main.h"

/**
 * _isalpha - check code
 * @c: input character
 * Description : function using _putchar check alphabet
 * Return: 1 if letter or 0 if not.
 */

int _isalpha(int c)
{
	char low, up;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (c == low || c == up)
				return (1);
		}
	}
	return (0);
}

