#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: char to get string
 *
 * Return: return length
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
