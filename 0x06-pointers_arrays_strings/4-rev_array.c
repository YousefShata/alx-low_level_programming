#include "main.h"
/**
 *reverse_array - reverses a given array
 *@a: the array
 *@n: size of array
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
int temp, i, l = n;

for (i = 0; i < n / 2; i++)
{
temp = a[l - 1];
a[l-1] = a[i];
a[i] = temp;
l--;
}
}
