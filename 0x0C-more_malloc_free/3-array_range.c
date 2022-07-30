#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: is a first argument
 * @max: is a second argument
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *ran;
int m;
int j;
if (min > max)
{
return (NULL);
}
j = (max - min) + 1;
ran = malloc(sizeof(*ran) * j);
if (ran)
{
for (m = 0; m < j; m++)
{
ran[m] = min;
min++;
}
return (ran);
}
return (NULL);
}
