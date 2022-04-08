#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: returns pointer ir NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nwstr;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[len1])
		len1++;

	if (s2 == NULL)
		s2 = "";
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	nwstr = malloc(len1 + n + 1);

	if (nwstr == NULL)
		return (NULL);

	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			nwstr[i] = *s1, s1++;
		else
			nwstr[i] = *s2, s2++;
	}
	nwstr[i] = '\0';

	return (nwstr);
}
