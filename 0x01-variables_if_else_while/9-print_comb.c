#include <stdio.h>

/**
 * main - prints "alphabet in lowercase"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
for (int i = '0'; i <= '9'; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
