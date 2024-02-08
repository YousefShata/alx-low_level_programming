#include <stdio.h>
/**
 * linear_search - use linear search
 * @array: input array
 * @size: input size
 * @value: input value
 * Return: no return.
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	for (int i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]", i, value);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
