#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory for array
 * @nmemb: number of elemnts
 * @size: size of each elemnt
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int *ptr;

if (size == 0 || nmemb == 0)
	return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
	return (NULL);

memset(ptr, 0, nmemb * size);

return (ptr);
}
