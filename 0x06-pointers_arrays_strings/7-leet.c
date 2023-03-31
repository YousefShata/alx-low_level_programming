#include "main.h"
/**
 * leet - change the language to 1337
 * @str: input string
 * Return: string with 1337
 */
char *leet(char *str)
{
char *alp = "aAeEoOtTlL";
char *numb = "4433007711";
int i;
int j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; alp[j] != '\0'; j++)
{
if (str[i] == alp[j])

str[i] = numb[j];
}
}
return (str);
}
