#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * main function print hexa
 */
int main(void)
{
int i;
char y;
for (i = 0 ; i <= 10 ; i++)
printf("%d", i);

for (y = 'a' ; y <= 'f' ; y++)
putchar(y);

putchar('\n');
return (0);
}
