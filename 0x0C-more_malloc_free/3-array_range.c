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
int *p;
int diff;
int i;

if (min > max)
	return (NULL);
diff = max - min + 1;

p = malloc(sizeof(int) * diff);

if (p == NULL)
	return (NULL);

for (i = 0; i < diff; i++)
{
p[i] = min + i;
}

return (p);
}
