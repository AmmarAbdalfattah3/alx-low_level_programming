#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: is a first parameter
 * @n: is a second parameter
 */
void reverse_array(int *a, int n)
{
int i;
n--;
i = 0;
int rev;

while (i < n)
{
rev = a[i];
a[n] = a[n];
a[n] = rev;
i++;
n--;
}
}
