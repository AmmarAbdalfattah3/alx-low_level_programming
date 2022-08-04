#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints  each element of an array.
 * @array: is a first parameter
 * @size: is a second parameter
 * @action: is a third parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
