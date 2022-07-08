#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is a variable
 */
void print_diagonal(int n)
{
int c;
int x;
if (n <= 0)
{
_putchar('\n');
}
for (c = 0; c < n; c++)
{
for (x = 0; x < c; x++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
