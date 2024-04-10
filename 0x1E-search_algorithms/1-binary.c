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
	size_t low = 0;
	size_t high = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		size_t mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
		{
			low = mid + 1;
		}

		else if (array[mid] > value)
		{
			high = mid - 1;
		}

	}

	return (-1);
}
