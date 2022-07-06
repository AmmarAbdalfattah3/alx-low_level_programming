#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: the value of the last digit
 * @b: is a variable
 */
int print_last_digit(int b)
{
b = b % 10;
if (b < 0)
b = -b;
_putchar(b + '0');
return (b);
}
