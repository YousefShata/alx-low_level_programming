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
int size = strlen(str);
if (str == NULL)
	return (NULL);

ptr = malloc(sizeof(char) * size);

for (i = 0; i < size; i++)
{
	ptr[i] = str[i];
}
return (ptr);
}
