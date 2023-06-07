#include "main.h"
int check_sqrt(int base, int num);
/**
 * _sqrt_recursion - calculate the natural square root of a number
 *@n: input number
 *Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
{
if (n < 0)
return (-1);

return (check_sqrt(1, n));
}
}

/**
 * check_sqrt - check if the number has a square root
 * @num: the number
 * @base: starting point
 * Return: the closest value to the giving number
 */
int check_sqrt(int base, int num)
{
if (base > num)
return (-1);

else if (base * base == num)
return (base);

return (check_sqrt(base + 1, num));
}
