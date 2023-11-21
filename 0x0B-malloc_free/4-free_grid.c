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
_putchar.c
#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: 1 on success.
 * return: -1 on error and set the errono appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

