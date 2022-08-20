#include <stdio.h>
/**
 * main - prints combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;

	num1 = 0;

	while  (num1 <= 9)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			if (num1 != num2)
			{
				if (num1 > num2)
				{
					continue;
				}
				putchar(num1 + '0');
				putchar(num2 + '0');
				if (num1 < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
