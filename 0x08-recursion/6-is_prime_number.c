#include "main.h"
int divide(int base, int num);
/**
 *is_prime_number - check if the number is a prime number
 *@n: input number
 *Return: 1 if the number is prime and 0 otherwise
 */
int is_prime_number(int n)
{
if (n == 1 || n < 0)
return (0);

else
return (divide(2, n));
}
/**
 * divide - Check if the number is dividable by any number but him self
 * @base: starting number to test
 * @num: input number
 * Return: 1 if the number isn't dividable and 0 otherwise
 */

int divide(int base, int num)
{
if (num % base == 0 && num != base)
return (0);

if (base == 10)
return (1);

return (divide(base + 1, num));
}
