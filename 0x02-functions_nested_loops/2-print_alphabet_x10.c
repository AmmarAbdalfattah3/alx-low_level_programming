#include "main.h"
/**
 * print_alphabet_x10 - prints "10 times the alphabet"
 *
 */
void print_alphabet_x10(void)
{
for (int b = 0; b < 10; b++)
{
for (int x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
}
_putchar('\n');
}
