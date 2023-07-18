#include <stdio.h>

/*
 * main - main function
 *
 * Return: nothing
 */

int main(void)
{
    int a = 1, b = 2, c, i;
    printf("%d, %d", a, b);
    for (i = 0; i < 48; i++)
    {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
    printf("\n");
    return (0);
}

