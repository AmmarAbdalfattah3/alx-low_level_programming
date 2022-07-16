#include "main.h"
#include <stdio.>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: is a first parameter
 * @n: is a second parameter
 */
void reverse_array(int *a, int n)
{
int i;
n--;
i = n;
while (i >= 0)
{
if (i != n)
{
printf(", ");
}
printf("%d", a[i]);
i--;
}
printf("\n");
}
