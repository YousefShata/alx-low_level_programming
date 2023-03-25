#include "main.h"
/**
 * print_line - Check descpriton
 * @n: input int
 * Return:nothing
 * print_line: print numbers from 0 to 9
 */
void print_line(int n)
{
int i;
if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');

}
}
