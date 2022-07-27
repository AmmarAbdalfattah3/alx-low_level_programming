#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: is a first parameter
 * @height: is a second parameter
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
int **mal = NULL;
int in;
int on;

if (width <= 0 || height <= 0)
{
return (NULL);
}
mal = malloc(width * sizeof(int *));
if (mal)
{
for (in = 0; in < width; in++)
{
mal[in] = (int *)malloc(sizeof(int) * width);
if (mal == NULL)
{
for (in = in - 1; in >= 0; in--)
{
free(mal[in]);
}
free(mal);
return (NULL);
}
else
{
for (on = 0; on < height; on++)
{
mal[in][on] = 0;
}
}
}

return (mal);
}
return (NULL);
}
