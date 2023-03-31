#include "main.h"
/**
 *tabulation - check for tabulation
 *@ch: input char
 *Return: 1 if the char is one of the tabulation 0 otherwise
 */
int tabulation(char ch)
{
char tabu[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int i;

for (i = 0 ; i < 10 ; i++)
{
if (ch == tabu[i])
return (1);

}
return (0);
}

/**
 * cap_string - capitalize words
 * @str: input string
 * Return: capitalized String
 */
char *cap_string(char *str)
{
int i = 0;

while (str[i])
{
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;

if (tabulation(str[i]) && str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] = str[i + 1] - 32;

i++;
}
return (str);
}
