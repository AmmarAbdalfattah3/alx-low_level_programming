#include <stdio.h>
#include <stdlib.h>

/**
 * main - rints the first 50 Fibonacci numbers
 * Return: (0)
 */


int main(void)
{
	int n = 0;
	unsigned long int x, y;

	x = 1, y = 2, n = 0;

	while (n <= 24)
	{
		printf("%lu, ", x);
		x += y;
		printf("%lu", y);
		y += x;
		if (n < 24)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');
	return (0);
}
