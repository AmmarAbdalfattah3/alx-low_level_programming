#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	int n = 0;
	unsigned long int x = 1, y = 2;

	while (n < 43)
	{
		printf("%lu", x);
		x += y;
		if (n < 42)
		{
			putchar(',');
			putchar(' ');
		}

		if (n <= 41)
		{
			printf("%lu", y);
			y += x;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
