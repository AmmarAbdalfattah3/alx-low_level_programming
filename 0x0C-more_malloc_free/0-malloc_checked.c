#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: is a argument
 * Return:  a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
int *rm;
rm = malloc(b * sizeof(int));
if (!rm)
{
exit(98);
}
return (rm);
}
