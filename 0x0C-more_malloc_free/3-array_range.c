#include "main.h"
#include <stdlib.h>
/**
 * array_range - make an int array from min to max
 * @min: lowests number in array
 * @max:highest number in array
 * Return: pointer points at the array
 */
int *array_range(int min, int max)
{
int i;
int *ptr;
int range;
if (min > max)
{
	return (NULL);
}
range = max - min + 1;
ptr = malloc(sizeof(int) * range);

if (ptr == NULL)
	return (NULL);

ptr[0] = min;
for (i = 1; i < range; i++)
{
	ptr[i] = ptr[i - 1] + 1;
}
return (ptr);
}
