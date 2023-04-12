#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2D grid
 * @grid: input string
 * @height: input height
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
return;

for(i = 0;i < height; i++)
free((int *)grid[i]);

free(grid);
}
