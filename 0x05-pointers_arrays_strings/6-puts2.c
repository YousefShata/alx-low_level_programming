#include "main.h"
#include <string.h>
/**
 * puts2 - print half of the string
 * @str: input string
 * Return: nothing
 */
void puts2(char *str)
{
int len = strlen(str);
int i;

for (i = 0 ; i <= len + 1; i += 2)
{
if (i == len)
break;
_putchar(str[i]);
}
_putchar('\n');
}
