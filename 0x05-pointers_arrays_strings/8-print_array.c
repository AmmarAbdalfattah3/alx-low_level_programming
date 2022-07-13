#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n: is a variable
 * @a: is a pointer
 */

void print_array(int *a, int n)
{
int m;

for (m = 0; m < n; m++)
{
printf("%d", a[m]);

if (m != n--)

{
printf(", ");
}

}

printf("\n");

}
