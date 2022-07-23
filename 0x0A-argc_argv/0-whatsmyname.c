#include <stdio.h>
/**
 * main - prints its name
 * @argc: is a first parameter
 * @argv: is a second parameter
 * Return: 0
 */

int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv);
}
return (0);
}
