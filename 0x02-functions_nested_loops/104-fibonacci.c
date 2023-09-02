#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	int n = 0;
	unsigned long int x = 1, y = 2;

	while (n < 47)
	{
		printf("%lu", x);
		x += y;
		if (n < 46)
		{
			putchar(',');
			putchar(' ');
		}

		if (n <= 45)
		{
			printf("%lu, ", y);
			y += x;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
