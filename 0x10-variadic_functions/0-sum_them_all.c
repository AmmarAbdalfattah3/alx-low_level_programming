#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: is a parameter
 * Return: the sum of all its parameters or 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int p;
unsigned int sum;
va_list var;
sum = 0;
if (n == 0)
{
return (0);
}
va_start(var, n);
for (p = 0; p < n; p++)
{
sum += va_arg(var, int);
}
va_end(var);
return (sum);

}
