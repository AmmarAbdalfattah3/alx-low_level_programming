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
if (i >= '9')
return (0);
putchar(',');
putchar(' ');
}
putchar('\n');
}
