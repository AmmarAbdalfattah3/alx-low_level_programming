#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: is a parameter
 */
void _puts_recursion(char *s)
{
int in;
in = 0;

if (s[in] != '\0')
{
_putchar(s[in]);
in++;
s++;
}
else
{
_putchar('\n');
return;
}
_puts_recursion(s);
}
