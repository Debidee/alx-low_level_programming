#include <stdlib.h>
#include "main.h"
/**
 * array_range - createsbarraybof intwgers
 * @min: minimum integer
 * @max: maxumum.integee
 * Return: pointer to new memory
 */
int *array_range(int min, int max)
{
	int *arr;
	int diff, i;

	if (min > max)
		return (NULL);

	diff = max - min;

	arr = malloc((diff + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= diff; i++)
		arr[i] = min++;

	return (arr);
}
