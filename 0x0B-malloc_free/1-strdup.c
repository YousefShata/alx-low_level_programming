#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - point to a newly allocated memory which points at a copy of string
 * @str: input string
 *Return: pointer to the memory
 */
char *_strdup(char *str)
{
int i;
char *ptr;
int size;
if (str == NULL)
	return (NULL);

size = strlen(str);

ptr = malloc(sizeof(char) * size + 1);
if (ptr == NULL)
	return (NULL);

for (i = 0; i < size; i++)
{
	ptr[i] = str[i];
}
return (ptr);
}
