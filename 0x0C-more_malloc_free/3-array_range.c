#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */

int *array_range(int min, int max)
{
	int i;
	int *j;
	int len;

	if (min > max)
		return (NULL);
	len = 0;
	for (i = min; i <= max; i++)
		len++;

	j = malloc(sizeof(int) * len);
	if (j == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		j[i] = min;
		i++;
		min++;
	}
	return (j);
}
