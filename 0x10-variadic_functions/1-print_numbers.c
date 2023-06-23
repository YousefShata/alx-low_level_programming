#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints number followed by new line
 * @separator: separate between each number
 * @n: number of arguments
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;

if (!separator)
	separator = "";

va_start(ap, n);

for (i = 0; i < n; i++)
{
	if (i == 0)
		printf("%d", va_arg(ap, int));
	else
	{
		printf("%s%d", separator, va_arg(ap, int));
	}
}
putchar('\n');
va_end(ap);
}
