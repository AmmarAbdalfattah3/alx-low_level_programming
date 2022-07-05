#include "main.h"
/**
 * print_alphabet_x10 - prints "10 times the alphabet"
 *
 */
void print_alphabet_x10(void)
{
int b;
int x;
for (b = 0; b < 10; b++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
}
_putchar('\n');
}
