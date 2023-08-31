#include "main.h"

/**
 * get_bit - gets bit a index
 * @n: number to go through
 * @index: index to go through
 * Return: int value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
