#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: input int
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
unsigned int *pB;
pB = malloc(b);
if (pB == NULL)
	exit(98);

return (pB);
}
