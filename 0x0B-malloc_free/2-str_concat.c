#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns pointer ir NULL
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, len3, i;
	char *nwstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;

	while (s1[len1] != '\0')
		len1++;
	len2 = 0;

	while (s2[len2] != '\0')
		len2++;

	len3 = len1 + len2;

	nwstr = malloc(len3 * sizeof(char) + 1);

	if (nwstr == NULL)
		return (NULL);
	while (i < len1)
	{
		nwstr[i] = s1[i];
		i++;
	}
	while (i < len2)
	{
		nwstr[i] = s2[i];
		i++;
	}
	nwstr[i] = '\0';

	return (nwstr);
}
