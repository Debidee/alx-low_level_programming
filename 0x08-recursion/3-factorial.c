#include "main.h"
/**
 * factorial - fuction returns factorial of number
 * @n: given number
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
