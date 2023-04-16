#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of the prgoramm
 * @args: arguments counter
 * @argv: pointer to the arrguments
 * Return: 0 to indicate sucess , 1 on failing
 */
int main(int args, char *argv[])
{
if (args != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
