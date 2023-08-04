#include <stdio.h>
#include "main.h"

/**
 *main - prints number of arguments
 *@argc: argument count
 *@argv: argument vectors
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc -1);
	return (0);
}
