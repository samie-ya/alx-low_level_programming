#include "main.h"
#include <stdlib.h>
/**
* **alloc_grid- to make grid with pointer to a pointer
*
* @width: rows used
*
* @height: column used
*
* Return: if 0 - return 0
*         else - return grid
*/
int **alloc_grid(int width, int height)
{
int i;
int j;
int **grid;
if (width == 0 || width < 0)
{
return (0);
}
if (height == 0 || height < 0)
{
return (0);
}
grid = malloc(sizeof(int *) * width);
if (grid == 0)
{
return (0);
}
for (i = 0; i < width; i++)
{
grid[i] = malloc(height * sizeof(int));
if (grid[i] == 0)
{
for (i = 0; i < width; i++)
{
free(grid[i]);
free(grid);
}
return (0);
}
}
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
