#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - return pointer to stirng
 * @str: input string
 * Return: Pointer to a new string which is a duplicate of the string
 */
char *_strdup(char *str)
{
if (str == NULL)
return (NULL);

return (strdup(str));
}
