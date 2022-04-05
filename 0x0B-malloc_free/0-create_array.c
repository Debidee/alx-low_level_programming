#include <stdlib.h>
#include "main.h"

/**
 * _create_array - crewte array
 * @size: size of arewy
 * @c : input char
 *
 * Return:pointer or  null
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	return (p);
}
