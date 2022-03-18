#include "main.h"

/**
 * _isupper - checks uppercase
 * @c: An input character
 * Description - checks uppercase
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)

{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
		return (0);
}
