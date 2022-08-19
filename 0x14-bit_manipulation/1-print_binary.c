#include "main.h"
/**
 *  print_binary - prints the binary representation of a number.
 *  @n: the decimal number to be inserted.
 *  Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int numb;
	int i;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	numb = n;
	for (i = 0; i != 0; i++)
	{
		n = n >> 1;
	}
	for (i -= 1; i >= 0; i--)
	{
		putchar('0' +  ((numb >> i) & 1));
	}
}
