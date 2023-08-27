#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: always (0)
 */

int main(void)
{
	int x = '0', y = '0', z = '0', d = '0';

	while (x <= '9')
	{
		while (y <= '9')
		{
			z = x;
			while (z <= '9')
			{
				d = y + 1;
				while (d <= '9')
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(d);
					if (x == '9' && y == '8' && z == '9' && d == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				d = '0';
				z++;
			}
			z = '0';
			y++;
		}
		y = '0';
		x++;
	}
	putchar('\n');
	return (0);
}
