#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: is a first parameter
 * @size: is a second parameter
 * @cmp: is a third parameter
 * Return: the index of the first element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (size <= 0)
{
return (-1);
}
if (array != NULL && cmp != NULL)
{
for (x = 0; x < size; x++)
{
if (cmp(array[x]))
{
return (x);
}
}
}
return (-1);
}
