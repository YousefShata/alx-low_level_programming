#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * main function print base 10 numbers
 */
int main(void)
{
int C;
for (C = 0 ; C < 10 ; C++)
putchar(48 + C);

putchar('\n');
return (0);
}
