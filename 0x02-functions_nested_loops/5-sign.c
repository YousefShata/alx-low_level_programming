#include "main.h"
#include <ctype.h>
/**
 * print_sign - Check descpriton
 * @n: Input char
 *  Return: 1 if the number is positive -1 if negative or 0 of it equal 0
 *  print_sign: check if the char c lower case or not
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
