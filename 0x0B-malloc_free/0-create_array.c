#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: is a first parameter
 * @c: is a second parameter
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *x;
unsigned int i;
i = 0;
x = (char *)malloc(size * sizeof(char));
while (i < size)
{
x[i] = c;
i++;
}
if (size <= 0)
{
return (NULL);
}
else if (x == NULL)
{
return (NULL);
}
else
return (x);
}
