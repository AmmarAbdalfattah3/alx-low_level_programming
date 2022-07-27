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
rx = 0;
while (rx < height)
{
free(grid[rx]);
rx++;
}
free(grid);
}
