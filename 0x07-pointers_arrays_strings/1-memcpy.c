#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination address
 * @src: source memory area
 * @n: integer number of bytes
 *
 * Return: return pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
