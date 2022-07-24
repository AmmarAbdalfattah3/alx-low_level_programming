#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: is a first parameter
 * @argv: is a second parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
int n1;
int n2;
int res;

if (argc != 3)
{
printf("Error\n");
return (1);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
res = (n1)*(n2);
printf("%d\n", res);
return (0);

}
