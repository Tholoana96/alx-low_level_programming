#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to newly duplicated string
 */

char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *ch;

	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	ch = malloc(sizeof(char) * c + 1);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		ch[i] = str[i];

	return (ch);

}
