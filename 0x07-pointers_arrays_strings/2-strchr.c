#include "main.h"
#include <stdlib.h>
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: charcter to be located
 *
 * Return: pointer to first occurence of character. Return NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
