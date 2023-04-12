#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - point at 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
int **p;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

p = (int **)malloc(height * sizeof(int *));

if (p == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
p[i] = (int *)malloc(width * sizeof(int));

if (p[i] == NULL)
return (NULL);
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
p[i][j] = 0;
}
}
return (p);
}
