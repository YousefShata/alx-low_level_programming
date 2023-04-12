#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatunate all arg paramaters
 * @ac: number of argument
 * @av: array contain the argument
 * Return: a pointer to a concatunated string
 */
char *argstostr(int ac, char **av)
{
char *p;
int i, j;
int l = 0;
int s = 0;

if (ac <= 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j]; j++)
	{
		s++;
	}
s++;
}
s++;

p = malloc(sizeof(char) * s);

if (p == NULL)
	return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j]; j++)
	{
		p[l] = av[i][j];
		l++;
	}
	p[l] = '\n';
	l++;
}
p[l] = '\0';

return (p);
}
