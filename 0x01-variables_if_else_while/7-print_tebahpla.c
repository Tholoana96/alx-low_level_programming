#include <stdio.h>

/**
 * main - Function used to display alphabets in reverse
 *
 * Return: always 0
 *
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
