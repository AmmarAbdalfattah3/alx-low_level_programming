#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143.
 * Return: 0
 */

int main(void)
{
	unsigned long int n, num, mod;

	num = 612852475143;
	n = 2;
	while (1)
	{
		mod = num % n;
		if (mod == 0)
		{
			num = num / n;
			n--;
		}
		n++;
		if (num == n)
		{
			printf("%ld\n", num);
			break;
		}
	}
	return (0);
}
