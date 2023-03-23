#include <stdio.h>

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
return (0);
}
