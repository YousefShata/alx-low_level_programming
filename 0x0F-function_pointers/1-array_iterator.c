#include <stdlib.h>
/**
 * array_iterator - call a funciton to each memebr of array
 * @array: input array
 * @size: size of array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
	return;

for (i = 0; i < size; i++)
	action(array[i]);
}
