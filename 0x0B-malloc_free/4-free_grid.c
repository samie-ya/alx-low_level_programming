#include "main.h"
#include <stdlib.h>
/**
* free_grid- to make grid free
*
* @grid: the grid used
*
* @height: the height
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
