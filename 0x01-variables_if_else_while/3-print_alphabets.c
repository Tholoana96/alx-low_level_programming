#include <stdio.h>

/**
 * main - Function used to display upper and lowercase alphabets
 *
 * Return: always 0
 *
*/

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
