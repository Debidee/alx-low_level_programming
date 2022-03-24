#include "main.h"

/**
 * _strncat - concatenated two strings
 * @dest: destination char
 * @src: source char
 * @n: number of bytes from char
 *
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + 1] = '\0';

	return (dest);
}
