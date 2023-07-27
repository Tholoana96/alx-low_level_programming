#include "main.h"

/**
 * _strcat - Concantenation of 2 strings
 * @dest:string to be appended
 * @src:string for concantenation
 *
 * Return: return pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
