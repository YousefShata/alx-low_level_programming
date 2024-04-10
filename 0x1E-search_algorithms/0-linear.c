#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - use linear search
 * @array: input array
 * @size: input size
 * @value: input value
 * Return: no return.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]", i, array[i]);
		printf("\n");
		if (value == array[i])
			return (i);
	}

	return (-1);
}
