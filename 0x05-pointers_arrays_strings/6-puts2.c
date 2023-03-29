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

for (i = 0 ; i <= len ; i += 2)
{
if (str[i] != '\0')
{
_putchar(str[i]);
}
else
{
break;
}
}
_putchar('\n');
}
