#include <stdio.h>
/**
 * main - Function prints letters of alphabet
 *
 * Return: always 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
