#include "function_pointers.h"
/**
 * array_iterator - prints  each element of an array.
 * @array: is a first parameter
 * @size: is a second parameter
 * @action: is a third parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
i = 0;
if (array != NULL && action != NULL)
{
while (i < size)
{
action(array[i]);
i++;
}
}
return;
}
