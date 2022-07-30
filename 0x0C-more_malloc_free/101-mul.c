#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * main - multiplies two positive numbers.
 * @argc: is a argument
 * @argv: is a argument
 * Return: 0
 */
int main(int argc, char **argv)
{
int sum;
if (argc == 3)
{
if (atoi(argv[1]) > 0 && atoi(argv[2]) > 0)
{
sum = atoi(argv[1])  * atoi(argv[2]);
printf("%i\n", sum);
return (0);
}
}
printf("Error\n");
exit(98);
}
