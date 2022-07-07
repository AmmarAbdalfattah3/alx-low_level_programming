#include "main.h"
/**
 * more_numbers - prints 10 times the numbers
 */
void more_numbers(void)
{
int b;
int n;
for (b = 0; b < 10; b++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
_putchar('\n');
}
