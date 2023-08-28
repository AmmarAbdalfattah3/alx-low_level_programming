#include <stdio.h>
#include "main.h"

/**
 * print_times_table -  prints the n times table
 * @n: a parameter
 */
void print_times_table(int n)
{
	int x = 0, y = 0, k;

	if (n >= 0 && n <= 15)
	{
		while (x <= n)
		{
			while (y <= n)
			{
				k = y * x;
				if (k <= 9)
				{
					if (y > 0)
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
				}
				else if (k >= 10 && k < 100)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				printf("%d", k);
				y++;
			}
			putchar('\n');
			y = 0;
			x++;
		}
	}
}
