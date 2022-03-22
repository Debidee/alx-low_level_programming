#include "main.h"

/**
 * swap_int - function swaps vakue of two integers
 * @a: input integer
 * @b: input integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int ant;

	ant = *a;
	*a = *b;
	*b = ant;

}
