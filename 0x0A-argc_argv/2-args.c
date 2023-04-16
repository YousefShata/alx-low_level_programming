#include <stdio.h>
/**
 * main - print the name of the prgoramm
 * @argc: arguments counter
 * @argv: pointer to the arrguments
 * Return: 0 to indicate that the programm ran succefully
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
