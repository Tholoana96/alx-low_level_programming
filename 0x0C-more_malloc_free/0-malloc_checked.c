#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - cause normal process termination with a status value of 98
 * @b: allocated memory
 * Return: pointer or void
 */

void *malloc_checked(unsigned int b)
{

	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
