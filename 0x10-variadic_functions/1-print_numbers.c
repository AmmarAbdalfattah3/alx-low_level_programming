#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is a first parameter
 * @n: is a second parameter
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list var;
if (separator == NULL)
{
return;
}
va_start(var, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(var, int));
if (i < n - 1)
{
printf("%s", separator);
}
}
va_end(var);
printf("\n");
}
