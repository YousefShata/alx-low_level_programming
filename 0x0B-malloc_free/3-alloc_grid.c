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
int **ptn;
int i, j;
if (width <= 0 || height <= 0)
	return (NULL);

ptn = (int **) malloc(sizeof(int *) * height);

if (ptn == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
ptn[i] = (int *)malloc(sizeof(int) * width);

	if (ptn[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(ptn[j]);
		}
	free(ptn);
	return (NULL);
	}
}

for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
		ptn[i][j] = 0;
	}
}
return (ptn);
}
