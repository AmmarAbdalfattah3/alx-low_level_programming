#include <stdio.h>

/**
 * main - entry point to c programm
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int x;
int d;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (d = 'a'; d <= 'f'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
