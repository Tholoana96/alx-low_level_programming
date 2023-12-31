#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string to print
 *
 * Return: 0 is success
 */

void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar('\n');
}
