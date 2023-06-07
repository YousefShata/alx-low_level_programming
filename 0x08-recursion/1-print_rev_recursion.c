#include "main.h"
#include <stdio.h>
/**
 * print_rev_recursion.c - put a string in reverse
 * @s: input string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
