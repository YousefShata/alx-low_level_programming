#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - swap from binary to undefined int
 * @b: the binary number
 * Return: Binary as int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, j;
	int n;

	if (!b)
		return (0);
	n = strlen(b);
	n--;

	for (j = 1, num = 0; n >= 0; n--)
	{
		if (b[n] == '0')
		{
			j *= 2;
			continue;
		}
		else if (b[n] == '1')
		{
			num += j;
			j *= 2;
			continue;
		}
	}
	return (num);
}
