#include "main.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: is a parameter
 */
void print_rev(char *s)
{

char *b;
b = s;

while (*s != '/n')
{
s++;
}

s -= 1;

while (b <= s)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
