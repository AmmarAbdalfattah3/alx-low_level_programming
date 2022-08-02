#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the file
 * @argc: is a first parameter
 * @argv: is a second parameter
 * Return: 0
 */
int main(int argc, char **argv)
{
if (argv && argc)
{
printf("%s\n", __FILE__);
}
return (0);
}
