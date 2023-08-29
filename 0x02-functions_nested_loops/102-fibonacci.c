#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers.
 * Return: (0)
 */

int main(void)
{
	int x, y, n;

	x = 1, y = 2, n = 2;

	do {
		printf("%d, ", abs(x));
		x += y;
		printf("%d", abs(y));
		y += x;
		n++;
		if (n == 50)
			break;
		putchar(',');
		putchar(' ');
	} while (1);

	putchar('\n');
	return (0);
}
