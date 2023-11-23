#include "main.h"

/**
 * clear_bit - Clears a bit at a given index in an unsigned long integer.
 * @n: Pointer to the unsigned long integer.
 * @index: Index of the bit to be cleared (starting from 0).
 *
 * Return: 1 on success, -1 on error (index out of range).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
