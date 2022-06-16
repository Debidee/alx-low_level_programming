#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substrin
 * @haystack: input string to search
 * @needle: input string to locate
 * Return: a pointer to the beginning of locates substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *starts = needle, *startl = haystack;

	while (*haystack)
	{
		startl = haystack;
		needle = starts;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = startl + 1;
	}
	return (NULL);
}
