#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatunate 2 strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: bytes number
 * Return: ponter to the concatunate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int len1, len2, size;
unsigned int i = 0;
unsigned int j = 0;
if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
	n = len2;

size = len1 + len2;

p = malloc(sizeof(char) * size + 1);

if (p == NULL)
	return (NULL);

for (i = 0; i < len1; i++)
{
	p[i] = s1[i];
}

for (j = 0; j < n; j++)
{
	p[i + j] = s2[j];
}
p[i + j] = '\0';

return (p);

}
