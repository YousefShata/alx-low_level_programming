#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *Return: nothing
 */
void rev_string(char *s)
{
char *start, *end, tmp;
int i = 0, j;

start = s;
end = s;
while (s[i] != '\0')
{
start++;
i++;
}
start--;
for (j = 0 ; j <= (i / 2); j++)
{
tmp = *end;
*end = *start;
*start = tmp;
start--;
end++;
}
}
