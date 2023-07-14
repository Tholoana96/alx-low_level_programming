#include <stdio.h>

/**
 * main - Function used to display numbers from 0 to 9
 *
 * Return: alway returns 0
 *
 */

int main(void)
{
	int i = 0;

	for (; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
