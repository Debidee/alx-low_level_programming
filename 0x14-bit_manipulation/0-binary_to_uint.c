#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to string of chars
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 1, val = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			val += dec;
		dec *= 2;
		len--;
	}
	return (val);
}
