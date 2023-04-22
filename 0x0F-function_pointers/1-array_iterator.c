#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iteratior - call a funciton to each memebr of array
 * @array: input array
 * @size: size of array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (size <= 0)
	return;
if (array == NULL || action == NULL)
	return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
