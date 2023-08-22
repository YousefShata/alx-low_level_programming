#include "main.h"
#include <string.h>
/**
 * _strncpy - copy a string
 * @dest: the first string
 * @src: the string we gonna copy from
 * @n: numbe of digits
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
