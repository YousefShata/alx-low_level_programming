#include <stdlib.h>
#include <time.h>
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
int n;
int flag = 0;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);

if (n < 0)
{
flag = 1;
n = n * -1;
}

while (n > 10)
{
n = n % 10;
}

if (flag == 1)
{
n = n * -1;
}

if (n > 5)
printf("%d and is greater then 5\n", n);
else if (n == 0)
printf("%d and is 0\n", n);
else if (n < 6 && n != 0)
printf("%d and is less than 6 and not 0\n", n);
return (0);
}
