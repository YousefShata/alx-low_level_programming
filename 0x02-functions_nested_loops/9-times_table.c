#include "main.h"
/**
 * times_table - Check descpriton
 *  Return: Nothing
 *  times_table : print time table from 0 to 9
 */
void times_table(void)
{
int i, j;
int n;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
n = i * j;

if (n / 10 == 0)
{
if (j != 0)
_putchar(' ');

_putchar('0' + n);
if (j == 9)
continue;
_putchar(',');
_putchar(' ');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
if (j == 9)
continue;
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
