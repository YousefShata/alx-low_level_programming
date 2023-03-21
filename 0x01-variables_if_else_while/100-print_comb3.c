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
int i, y;

for (i = '0'; i < '9'; i++)
{
for (y = i + 1; y <= '9'; y++)
{
if (y != i)
{
putchar(i);
putchar(y);
if (i == '8' && y == '9')
continue;

putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
