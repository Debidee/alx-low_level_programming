#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns sum
 * @n: number of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int result = 0;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
	return 0;

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	
	va_end(args);

	return (result);
}
