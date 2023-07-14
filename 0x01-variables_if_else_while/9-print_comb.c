#include <stdio.h>

/**
 * main - Function used to display all possible number combinations
 *
 * Return: always 0
 *
 */

int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
