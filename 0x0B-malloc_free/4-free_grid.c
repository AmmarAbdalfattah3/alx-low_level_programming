#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: is a parameter
 * @height: is a parameter
 */
void free_grid(int **grid, int height)
{
int rx;
for (rx = 0; rx < height; rx++)
{
free(grid[rx]);
}
free(grid);
}
