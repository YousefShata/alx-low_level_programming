#include <stdlib.h>
#include <stdio.h>
/**
 * positive_or_negative - Entry point
 * @n: number to check
 * Return: nothing
 *
 * positive_or_negative check if number is negative or positive
 */
void positive_or_negative(int n)
{
int n;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

}
