#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a string
 * @name: the string
 * @f: pointer to the function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *name))
{
if (name == NULL || f == NULL)
	return;

f(name);
}
