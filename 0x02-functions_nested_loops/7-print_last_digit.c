#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - Check descpriton
 * @n: Input number
 *  Return: the last digit of a number
 *  print_last_digit check if the char c lower case or not
 */
int print_last_digit(int n)
{
int x;
if (n < 0)
x = -1 * (n % 10);
else
x = n % 10;


_putchar(x +'0');
return (x);
}
