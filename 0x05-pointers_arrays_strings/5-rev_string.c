#include "main.h"

/**
 * rev_string - reverses a string
 * @s : string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char last;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		last = s[i];
		s[i++] = s[len];
		s[len] = last;
	}
}
