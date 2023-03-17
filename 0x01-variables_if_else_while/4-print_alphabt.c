#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * main function print alphabits
 */
int main(void)
{
char C;

for (C = 'a' ; C <= 'z' ; C++)
{
if (C == 'e' || C == 'q')
continue;

putchar(C);
}
putchar('\n');
return (0);
}
