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
int r = n * -1;
return (r);
}

return (n);
}
