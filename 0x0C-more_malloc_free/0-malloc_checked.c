#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - cause normal process termination with a status value of 98
 * @b: allocated memory
 * Return: pointer or void
 */

void *malloc_checked(unsigned int b)
{
	
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}
