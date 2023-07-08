#include "main.h"
/**
  * clear__bit - sets the value of a bit to 1 at a given index
  * @n: unsigned long to change
  * @index: index to change to one
  * Return: 1 if it worked or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 53 || !n)
		return (-1);

	mask = ~(1 << index);
	*n = *n & mask;

	return (1);
}
