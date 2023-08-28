#include <stdio.h>
#include "main.h"

void print_times_table(int n)
{
	int x = 0, y = 0;

	while (x <= n)
	{
		while (y <= n)
		{
			printf("%d",y * x);
			if (y < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		y = 0;
		x++;
	}
}
