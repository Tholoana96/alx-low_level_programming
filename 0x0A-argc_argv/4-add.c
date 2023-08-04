#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - add two numbers
 *@argc: arugment count
 *@argv: argument vectors
 *
 * Return: 0 no errors, else 1
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	int total = 0;

	for (int i = 1; i < argc; i++)
	{
	char *arg = argv[i];

	for (int j = 0; arg[j] != '\0'; j++)
	{
		if (!isdigit(arg[j]))
		{
			printf("Error\n");
			return (1);
		}
	}

	int num = atoi(arg);

	if (num < 0)
	{
		printf("Error\n");
		return (1);
	}

	total += num;
	}

	printf("%d\n", total);
	return (0);
}
