#include "main.h"

/**
 * set_bit - sets a bit
 * @n: pointer to the bit
 * @index: index to set value to
 *
 * Return: 1 or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n |= (1 << index);

	return (1);
}
