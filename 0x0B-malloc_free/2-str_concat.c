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
	char *nwstr;
	int i, j, len1, len2;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	nwstr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (nwstr == NULL)
		return (NULL);

	while (i < len1)
	{
		nwstr[i] = s1[i];
		i++;
	}
	while (i < len2)
	{
		nwstr[i] = s2[j];
		i++;
		j++;
	}
	nwstr[i] = '\0';

	return (nwstr);
}
