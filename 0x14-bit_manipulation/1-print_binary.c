#include "main.h"
/**
 *  print_binary - prints the binary representation of a number.
 *  @n: the decimal number to be inserted.
 */

void print_binary(unsigned long int n)
{
	unsigned long int numb;
	int i;

	numb = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i != 0; i++)
	{
		n = n >> 1;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar('0' + ((numb >> i) & 1));
	}

}
