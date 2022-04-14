#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - cakks function given by parameter
 * @array: arraybof integers
 * @size: aize of array
 * @action: funcrion pointwe
 * Return: voie
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
