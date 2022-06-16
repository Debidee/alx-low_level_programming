#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length os a prefix substring
 * @s: string
 * @accept: source
 * Return: number of bytes of initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int prev = 0;
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		prev = count;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
			j++;
		}
		if (prev == count)
		{
			break;
		}
		i++;
	}

	return (count);
}
