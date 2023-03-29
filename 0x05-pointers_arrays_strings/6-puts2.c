#include "main.h"
/**
 * puts2 - print half of the string
 * @str: input string
 * Return: nothing
 */
void puts2(char *str)
{
int len = _strlen(str);
int i;

for (i = 0 ; i <= len + 1; i += 2 )
{
if (str[i] == '\0')
break;
_putchar(str[i]);
}
_putchar('\n');
}
