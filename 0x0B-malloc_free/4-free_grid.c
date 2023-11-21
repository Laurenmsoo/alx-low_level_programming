#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2-D array
 * @grid: 2d array
 * @height: height dimension of the array
 * Description: frees the array memory
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
