#include "main.h"
/**
 * print_square - Check descpriton
 * @n: input int
 * Return:nothing
 * print_square: print a square o #
 */
void print_square(int n)
{
int i, j;

if (n <= 0)
_putchar('\n');

else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
