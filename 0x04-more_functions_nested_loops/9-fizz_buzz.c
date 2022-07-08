#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * Return: Always 0
 */
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (n / 3)
{
printf("Fizz");
}
else if (n / 5)
{
printf("Buzz");
}
else if (n / 3 && n / 5)
{
printf("FizzBuzz");
}
else
{
printf("n");
}
printf("\n");
}
}
