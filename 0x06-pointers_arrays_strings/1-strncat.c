#include "main.h"
#include <string.h>
/**
 * *_strncat - concatunate 2 strings into one
 * @dest: first string
 * @src: second string
 * @n: input size
 * Return: concatunated string
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
