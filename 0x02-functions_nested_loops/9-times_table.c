#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int x;
int b;
int p;
for (x = 0; x <= 9; x++)
{
for (b = 0; b <= 9; b++)
{
p = x * b;
if (b != 0)
{
_putchar(0);
_putchar(' ');
_putchar(',');
}
if (b == 0)
{
_putchar(0);
}
else if (p >= 10)
{
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
else if ((p < 10) && (b != 0))
{
_putchar(' ');
_putchar((p % 10) + '0');
}
}
_putchar('\n');
}
}
