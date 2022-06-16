#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function searches strinf for any set of bytes
 * @s: input string
 * @accept: char to compare
 * Return: pointer to byte in s that matches or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
