#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all its parameters
 * @n: integars to sum
 * Return: if n == 0 - 0 or sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return sum;
}
