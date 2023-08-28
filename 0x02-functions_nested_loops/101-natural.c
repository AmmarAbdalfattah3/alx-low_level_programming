#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes and prints
 * the sum of all the multiples of 3 or 5 below 1024
 * Return: always (0)
 */

int main(void)
{
	int num1, num2, x, y, sum;

	num1 = 1, num2 = 1, x = 0, y = 0;

	while (num1 <= 1024)
	{
		if ((num1 % 3) == 0)
		{
			x += num1;
		}
		else if ((num2 % 5) == 0)
		{
			y += num2;
		}
		num1++;
		num2++;
	}
	sum =  x + y;
	printf("%d\n", sum);
	return (0);
}
