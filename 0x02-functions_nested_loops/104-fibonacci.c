#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int n = 0;
	unsigned long int x = 1, y = 2;

	while (n < 49)
	{
		printf("%lu, ", x);
		x += y;
		printf("%lu", y);
		y += x;
		if (n <= 48)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
