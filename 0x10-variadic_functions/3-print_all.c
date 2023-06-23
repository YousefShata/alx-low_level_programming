#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: input string
 */
void print_all(const char * const format, ...)
{
va_list ap;
char *str;
int i = 0, flag = 0, j = 0;
char *list = "cifs";
va_start(ap, format);
while (format && format[i])
{
	j = 0;
	while (list[j])
	{
		if (format[i] == list[j] && flag == 1)
		{
			printf(", ");
			break;
		} j++;
	}
	switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(ap, int)), flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), flag = 1;
				break;
			case 's':
				str = va_arg(ap, char *), flag = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			} i++;
}
putchar('\n');
va_end(ap);
}
