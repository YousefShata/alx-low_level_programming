#include <stdio.h>
/**
 * binary_search - use binary search
 * @array: input array
 * @size: input size
 * @value: input value
 * Return: no return.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i;
	size_t mid;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}

		else if (array[mid] < value)
		{
			left = mid + 1;
		}

		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
