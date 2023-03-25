#include "main.h"

/**
* print_triangle - check description
* @n: input int
* Return: nothign
* print_triangle : Create a triangle
*/

void print_triangle(int n)
{
int i, j;
int y = n - 1;
if (n <= 0)
_putchar('\n');

else
{
for (i = 0; i < n ; i++)
{
for (j = 0; j < n ; j++)
{
if (j < y)
_putchar(' ');
else
_putchar('#');
}
y--;
_putchar('\n');
}
}

}
