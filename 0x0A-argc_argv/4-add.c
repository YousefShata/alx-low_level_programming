#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Print name of the programm
 *  @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success 1 otherwise
 */
int main(int argc, char *argv[])
{
int i, j;
int sum = 0;

for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j]; j++)
	{
		if (isdigit(argv[i][j] == 0))
		{
			printf("Error\n");
			return (1);
		}
	}
	sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}