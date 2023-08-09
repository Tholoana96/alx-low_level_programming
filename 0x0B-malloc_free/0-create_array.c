#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array
 * @size: size of array to create
 * @c: char to initialize with?
 * Return: char value
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	ch = malloc(sizeof(char) * size);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
