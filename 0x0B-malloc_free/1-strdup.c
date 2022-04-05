#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to a nwe string
 * @str: string
 *
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *p;
	int size, i;

	if (str == NULL)
	{
		return (NULL);
	}

	size = 0;
	while (*(str + size) != '\0')
		size++;

	p = malloc(size * sizeof(char) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';

	return (p);
}
