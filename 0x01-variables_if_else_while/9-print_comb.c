#include <stdio.h>

/**
 * main - prints "alphabet in lowercase"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x;
int d;
for (x = 0; x <= 9; x++)
{
for (d = 0; d <= 9; d++)
{
putchar(x);
putchar(',');
putchar(d);
}
}
putchar('\n');
return (0);
}

