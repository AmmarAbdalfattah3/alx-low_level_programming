#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: is a variable
 */
void print_line(int n)
{
int b;
for (b = 0; b < n; n--)
{
_putchar('_');
}
_putchar('\n');
}
