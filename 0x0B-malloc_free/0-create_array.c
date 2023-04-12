#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: the array it self
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{

unsigned int i;
char *p;

if (size == 0)
return (NULL);

p = malloc(size * sizeof(char));

for (i = 0; i < size; i++)
p[i] = c;

return (p);
}
