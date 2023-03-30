#include "main.h"
/**
 * string_toupper - changes all lower case to upper case
 * @str: input str
 * Return: string in upper case
 */
char *string_toupper(char *str)
{
char *p = str;

while (*p != '\0')
{
if (*p > 'a' && *p <= 'z')
*p = *p - 32;
p++;
}
return (str);
}
