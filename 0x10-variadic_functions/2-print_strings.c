#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints string followed by new line
 * @separator: chat between each string
 * @n: number of argumets
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
char *next;
va_start(ap, n);

if (!separator)
	separator = "";

for (i = 0; i < n; i++)
{
next = va_arg(ap, char*);
	if (*next == '\0')
		next = "nil";

	if (i == 0)
		printf("%s", next);
	else
	{
		printf("%s%s", separator, next);
	}
}
putchar('\n');
va_end(ap);
}
