#include <stdio.h>

/**
 * main - Function used to print characters in lowercase with exception
 *
 * Return: always 0
 *
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		if (a != 'q' &&  a != 'e')
			putchar(a);
	putchar('\n');
	return (0);
}
