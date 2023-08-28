#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes and prints
 * the sum of all the multiples of 3 or 5 below 1024
 * Return: always (0)
 */

int main(void)
{
	int num1, num2, sum;

	num1 = 0, num2 = 0;
	while (num1 <= 1024)
	{
		if ((num1 % 3) == 0 && (num2 % 5) == 0)
		{
			sum = num1 + num2;
		}
		num1++;
		num2++;
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
