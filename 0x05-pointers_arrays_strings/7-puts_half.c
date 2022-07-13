#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: is a pointer
 */
void puts_half(char *str)
{
char *mk = str;
int ron;
int len = 0;

while (*str)
{

str++;
len++;

}

str = mk;

if (!(len % 2))
{

ron = (len - 1) / 2;

ron++;

}

else
{
ron = len / 2;

ron++;

}


while (ron < len)
{
_putchar(str[ron]);
ron++;
}
_putchar('\n');

}
