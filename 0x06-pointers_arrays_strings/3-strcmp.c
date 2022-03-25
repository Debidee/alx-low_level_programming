#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input char
 * @s2: input char
 *
 * Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
