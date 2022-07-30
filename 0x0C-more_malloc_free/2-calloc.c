#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: is a argument
 * @size: is a argument
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *call;
unsigned int k;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
call = malloc(nmemb * size);
if (call)
{
for (k = 0; k < (nmemb * size); k++)
{
call[k] = 0;
}
return (call);
}
return (NULL);
}
