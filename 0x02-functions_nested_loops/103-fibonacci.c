#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	unsigned long int x, y, n, sum;

	x = 0, y = 1, n = 0, sum = 0;

	while (n <= 4000000 && y <= 4000000)
	{
		x += y;
		y += x;
		if (x % 2 || y % 2)
		{
			if (x % 2 == 0)
			{
				sum += x;
			}
			else if (y % 2 == 0)
			{
				sum += y;
			}
			else
			{
				sum += 0;
			}
		}
		n++;
	}
	printf("%lu\n",sum);
	return (0);
}
