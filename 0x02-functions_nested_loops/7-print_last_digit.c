#include "main.h"

/**
 * print_last_digit - prints the last digits of any number
 * @a: the int value to be acted upon
 * author: sammykingx
 * Return: returns the last digit to calling function
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last <0)
	{
	last = last * -1;
	}
	_putchar (last + '0');
	return (last);
}
