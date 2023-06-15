#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print name of the programm
 *  @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success 1 on fail
 */
int main(int argc, char *argv[])
{
int sum;
if (argc <= 2)
{
	printf("Error\n");
	return (1);
}
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
return (0);
}
