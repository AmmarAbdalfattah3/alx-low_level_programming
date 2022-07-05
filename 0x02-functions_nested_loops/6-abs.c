#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *Return: Always 0
 *@n: is a variable
 */
int _abs(int n)
{

if (n < 0)
{
r = n * (-1);
_putchar(r);
}
else
{
_putchar(n);
}
return (0);
}
