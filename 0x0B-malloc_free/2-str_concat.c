#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concationate 2 strings into 1
 * @s1: first string
 * @s2: second string
 * Return: Pointer to a new string that has both string concationated
 */
char *str_concat(char *s1, char *s2)
{
int size1, size2;
int i, j;
char *p;

if (s1 == NULL)
size1 = 0;
else
size1 = strlen(s1);

if (s2 == NULL)
size2 = 0;
else
size2 = strlen(s2);

p = malloc(size1 + size2 + 1);

if (p == NULL)
return (NULL);

for (i = 0; i < size1; i++)
p[i] = s1[i];

for (j = 0; j < size2; j++)
p[i + j] = s2[j];

p[i + j] = '\0';
return (p);
}
