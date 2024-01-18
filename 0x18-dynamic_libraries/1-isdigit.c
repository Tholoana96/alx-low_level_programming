#include "main.h"

/**
* _isdigit - write a function that check for a digit (0 through 9).
* @c: parameter to check
* Return: 1 on succes 0 on failure
**/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
