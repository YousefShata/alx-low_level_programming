#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array
 * @size: input int
 * @c: specific char
 * Return: Pointer to array of char
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
	return (NULL);
arr = malloc(sizeof(char) * size);

for (i = 0; i < size; i++)
{
	arr[i] = c;
}
return (arr);
}
