#include <stdio.h>
/**
 * main - enteray point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num3 = 0; num3 <= 9; num3++)
	{
		for (num1 = 0; num1 <= 9; num1++)
		{
			for (num2 = 0; num2 <= 9; num2++)
			{
				if (num3 != num1 && num1 != num2 && num3 != num2)
				{
					if (num3 > num1 || num1 > num2)
					{
						continue;
					}
					putchar(num3 + '0');
					putchar(num1 + '0');
					putchar(num2 + '0');
					if (num3 < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
