#include <stdlib.h>
/**
 * int_index - search for an integer
 * @array: the array
 * @size: array size
 * @cmp: fucntion poitner
 * Return: the the integer , -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <=0)
	return (-1);
if (array == NULL || cmp == NULL)
	return (-1);

for (i = 0; i < size; i++)
{
	if(cmp(array[i]))
		return (i);
}
return (-1);
}
