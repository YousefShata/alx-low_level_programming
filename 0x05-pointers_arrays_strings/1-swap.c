#include "main.h"
/**
 *swap_int - swap between 2 int
 *@a: first int
 *@b: 2nd int
 *return: nothing
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
