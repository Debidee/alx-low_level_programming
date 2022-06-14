#include <stdio.h>
#include "main.h"
/**
 * _atoi - a function that converts string to integer
 * @s: input string
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int digit = 0;
	char null_flag = 0;

	while (*s)
	{
		if(*s == '_')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			digit = digit * 10 + *s - '0';
		}

		else if (null_flag)
			break;
		s++;
	}

	if (sign < 0)
		digit = (-digit);

	return (digit);
}
