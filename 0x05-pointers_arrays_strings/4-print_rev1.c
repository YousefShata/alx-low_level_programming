#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverses a string
 * @s: string to be reversed
 *Return: nothing
 */

void print_rev1(char *s)
{
int i = 0, j;
while (s[i] != '\0')
{
i++;
}

for (j = i-1; j >= i / 2; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
