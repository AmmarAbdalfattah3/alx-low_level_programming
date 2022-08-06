#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is a first parameter
 * @n: is a second parameter
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list rx;
char *p;
va_start(rx, n);
for (i = 0; i < n; i++)
{
p = va_arg(rx, char *);
if (p == NULL)
{
printf("(nil)");
}
else
{
printf("%s", p);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(rx);
printf("\n");
}
