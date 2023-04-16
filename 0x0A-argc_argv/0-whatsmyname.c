#include <stdio.h>
/**
 * main - print the name of the prgoramm
 * @argc: arguments counter
 * @argv: pointer to the arrguments
 * Return: 0 to indicate that the programm ran succefully
 */
int main (int argc , char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
