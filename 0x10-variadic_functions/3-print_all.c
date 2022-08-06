#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: is a parameter
 */
void print_all(const char * const format, ...)
{
int a = 0, n = 0;
char *p = "", *str;
va_list var;
va_start(var, format);
while (format[n])
{
n++;
}
while (format[a])
{
if (format[a + 1])
{
p = ", ";
}
else if (a == n - 1)
{
p = "";
}
switch (format[a])
{
case 'c':
printf("%c%s", va_arg(var, int), p);
break;
case 'i':
printf("%i%s", va_arg(var, int), p);
break;
case 'f':
printf("%f%s", va_arg(var, double), p);
break;
case 's':
str = va_arg(var, char *);
if (!str)
str = "(nil)";
printf("%s%s", str, p);
break;
}
a++;
}
printf("\n");
}
