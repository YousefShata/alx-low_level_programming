#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * main function check the last digit in number
 */
int main(void)
{
long int x = 1, y = 2;
long flag;
int i;
printf("%ld, %ld", x, y);
for (i = 0; i < 48 ; i++)
{
printf(", ");
flag = y;
y = y + x;
x = flag;
printf("%ld", y);
}
putchar('\n');
return (0);
}
