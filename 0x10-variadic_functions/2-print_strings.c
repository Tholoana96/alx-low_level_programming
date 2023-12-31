#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: the string to be  print between strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list string;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
		printf("(nil)");
		else
		printf("%s", str);

		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(string);
}
