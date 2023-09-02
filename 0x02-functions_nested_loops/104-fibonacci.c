#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	unsigned int n = 0;
	unsigned long int x = 1, y = 2;

	while (n < 49)
	{
		printf("%lu, ", x);
		x += y;
		printf("%lu", y);
		y += x;

		if (n < 48)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
