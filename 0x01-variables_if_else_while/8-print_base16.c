#include <stdio.h>

/**
 * main - Funtion used to print all numbers of base 16
 *
 * Return: always 0
 *
 */

int main(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (a = 0; i <= 'f' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
