#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Check description
 * @n: Starting point to print
 * Return: nothing
 * print_to_98 print the natural item start form n to 98
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%d", n);
if (n > 98)
{
n--;
printf(", ");
}
else if (n < 98)
{
n++;
printf(", ");
}
}
printf("%d\n", n);
}
