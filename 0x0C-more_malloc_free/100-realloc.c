#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: is a first argument
 * @old_size: is a second argument
 * @new_size: is a third argument
 * Return:  real
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *real;
unsigned int m;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
real = malloc(new_size);
if (real && new_size > old_size)
{
for (m = 0; m < new_size; m++)
{
real[m] = 0;
}
free(ptr);
return (real);
}
return (NULL);
}
