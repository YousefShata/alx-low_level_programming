#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatunate 2 strings
 * @s1: first string
 * @s2: second strirng
 * @n: input number
 * Return: pointer to the concatunated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int size1, size2;
unsigned int i, j;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

size1 = strlen(s1);
size2 = strlen(s2);

if (n >= size2)
{
	n = size2;
}
ptr = malloc(sizeof(char) * (size1 + n + 1));

if (ptr == NULL)
	return ("");

for (i = 0; i < size1; i++)
{
	ptr[i] = s1[i];
}

for (j = 0; j < n; j++)
{
	ptr[i + j] = s2[j];
}
ptr [i + j] = '\0';

return (ptr);
}
