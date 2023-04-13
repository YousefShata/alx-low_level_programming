#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elemnts
 * @size: size of each elemnt
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *p;

if (nmemb == 0 || size == 0)
	return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
	return (NULL);
memset(p, 0, size * nmemb);

return (p);
}
