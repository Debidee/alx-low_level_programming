#include "main.h"

/**
 * _strcat - concatenates two files
 * @dest: destination character
 * @src: source char
 *
 * Return: new pointee char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[n + 1] = src[i];
	dest[n + 1] = '\0';
	return (dest);
}
