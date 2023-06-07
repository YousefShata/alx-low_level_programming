#include "main.h"
#include <stdio.h>
/**
 * factorial - calculate factorial of a number
 * @n: input n
 * Return: an int of the factorial
 */
int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
if (n == 0)
{
	return (1);
}
return (n * factorial(n - 1));
}
