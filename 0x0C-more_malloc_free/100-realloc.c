#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocate memory block
 * @ptr: pointer to be freed
 * @old_size: old size for the block
 * @new_size: new size for the block
 * Return: pointer in the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
free(ptr);
p = malloc(new_size);
return (p);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

p = malloc(new_size);

memcpy(p, ptr, old_size);

free(ptr);

return (p);
}

