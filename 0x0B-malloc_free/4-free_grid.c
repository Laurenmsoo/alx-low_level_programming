#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees 2d grid created
* @grid: 2d grid created
* @height: height of the grid
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
