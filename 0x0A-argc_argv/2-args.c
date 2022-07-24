#include <stdio>
/**
 * main - prints all arguments it receives.
 * @argc: is a first parameter
 * @argv: is a second parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
