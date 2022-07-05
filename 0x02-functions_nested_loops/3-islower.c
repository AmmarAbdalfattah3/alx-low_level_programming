#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 1 or 0
 *@c: is the input character
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
