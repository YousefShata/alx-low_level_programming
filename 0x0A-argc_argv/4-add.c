#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - print the name of the prgoramm
 * @argc: arguments counter
 * @argv: pointer to the arrguments
 * Return: 0 to indicate that the programm ran succefully
 */
int main(int argc, char *argv[])
{
int i, j;
int n = 0;

for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j]; j++)
	{
		if (isdigit(argv[i][j]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
}

for (i = 1; i < argc; i++)
{
	n = n + atoi(argv[i]);
}
printf("%d\n", n);
return (0);
}
