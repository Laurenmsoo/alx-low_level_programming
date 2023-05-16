#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns pointer to a 2D array
* @width: width input
* @height: height input
* Return: pointer to 2D  array,
*return NULL if it fails
*/
int **alloc_grid(int width, int height)
{
int **st;
int a, b;

if (width <= 0 || height <= 0)
return (NULL);
st = malloc(sizeof(int *) * height);
if (st == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
st[a] = malloc(sizeof(int) * width);
if (st[a] == NULL)
{
for (; a >= 0; a--)
free(st[a]);
free(st);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
st[a][b] = 0;
}
return (st);
}
