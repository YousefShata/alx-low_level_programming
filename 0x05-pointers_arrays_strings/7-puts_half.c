#include "main.h"
#include <string.h>
/**
* puts_half - prints half of a string
* followed by a new line
* @str: string to be printed
* Return: nothing
*/

void puts_half(char *str)
{
int len, n, i;
len = strlen(str);

if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else if (len % 2 == 1)
{
for (n = (len - 1) / 2; n < len - 1; n++)
{
_putchar(str[n + 1]);
}
}
_putchar('\n');
}
