#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add 2 numbers
 * @a: first number
 * @b: second number
 * Return: sum of 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - add 2 numbers
 * @a: first number
 * @b: second number
 * Return: sub of 2 numbers
 */
int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - multiply 2 numbers
 * @a: first number
 * @b: second number
 * Return: multiplication of 2 numbers
 */
int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_div - divide 2 numbers
 * @a: first number
 * @b: second number
 * Return: divison of 2 numbers
 */
int op_div(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
} 
return (a / b);
}

/**
 * op_mod - modulas 2 numbers
 * @a: first number
 * @b: second number
 * Return: modulas of 2 numbers
 */
int op_mod(int a, int b)
{
if (b ==0)
{
	printf("Error\n");
	exit(100);
}
        return (a % b);
}
