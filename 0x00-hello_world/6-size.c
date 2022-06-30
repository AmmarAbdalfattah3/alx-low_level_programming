#include <stdio.h>
/**
 * main - prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of an int: %zu bytes\n", sizeof(int));
printf("Size of a float: %zu bytes\n", sizeof(float));
printf("Size of a long int: %zu bytes\n", sizeof(long int));
printf("Size of a long long int: %zu byte\n", sizeof(long long int));
printf("Size of a char: %zu byte\n", sizeof(char));

return (0);
}
