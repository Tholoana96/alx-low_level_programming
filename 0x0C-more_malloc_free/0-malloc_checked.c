#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - cause normal process termination with a status value of 98
 * @b: allocated memory
 * Return: pointer or void
 */

void *malloc_checked(unsigned int b)
{
	
	void *q;

	q = malloc(b);
	if (q == NULL)
		exit(98);

	return (q);
}
