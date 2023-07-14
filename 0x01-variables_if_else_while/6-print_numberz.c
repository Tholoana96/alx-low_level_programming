#include <stdio.h>

/**
 * main - Function used to display numbers 0 to 9
 *
 * Return: always 0
 *
 */

int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		putchar('0' + a);
	putchar('\n');
	return (0);
}
