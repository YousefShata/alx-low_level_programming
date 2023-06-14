#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinate 2 strings into 1
 *@s1: first string
 *@s2: second string
 *Return: pointer to a whole string when combined
 */
char *str_concat(char *s1, char *s2)
{
int size1 = 0;
int size2 = 0;
int totalsize, i, j;
char *ptn;

if (s1 == NULL)
	return (NULL);

if (s2 == NULL)
	return (NULL);

size1 = strlen(s1);
size2 = strlen(s2);
totalsize = size1 + size2 + 1;

ptn = malloc(sizeof(char) * totalsize);
if (ptn == NULL)
	return (NULL);

for (i = 0; i < size1; i++)
{
	ptn[i] = s1[i];
}

for (j = 0; j < size2; j++)
{
	ptn[i + j] = s2[j];
}
ptn[i + j] = '\0';
return (ptn);
}
