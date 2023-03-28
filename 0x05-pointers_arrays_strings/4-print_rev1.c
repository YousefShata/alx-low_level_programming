#include "main.h"
/**
 * print_rev - reverses a string
 * @s: string to be reversed
 *Return: nothing
 */

void print_rev(char *s)
{
int i, j;

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
