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
in = 0;
for (argc-- && argv[in])
{
in++;
}
in--;
printf("%d\n", in);
return (0);
}
