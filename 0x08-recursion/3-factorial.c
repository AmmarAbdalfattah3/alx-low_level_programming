#include <stdio.h>
/**
 * factorial -  returns the factorial of a given number.
 * @n: is a parameter
 * Return: -1 and numbers
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n > 0)
{
return (n * factorial(n - 1));
}
return (-1);
}
