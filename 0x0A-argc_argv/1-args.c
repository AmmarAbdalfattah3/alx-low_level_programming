#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: is a first parameter
 * @argv: is a second parameter
 * Return: 0
 */
int main(int argc, char **argv)
{
int in;
for (in = 0; argc--; in++)
{
argv[in];
}
printf("%d\n", in - 1);
return (0);
}
