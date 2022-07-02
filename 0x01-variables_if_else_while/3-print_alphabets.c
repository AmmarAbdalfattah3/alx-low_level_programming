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
for (x='a'; x<='z'; x++)
{
putchar(x);
}
for (d='A'; d <= 'Z'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
