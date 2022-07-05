#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *Return: Always 0
 *@n: is a variable
 */
int _abs(int n)
{
int b = n * "-";
if (b < 0)
{
_putchar(b);
}
else
{
_putchar(n);
}
return (0);
}
