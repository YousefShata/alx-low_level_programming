#include <stdio.h>
/**
 * main - Print name of the programm
 *  @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */
int main(int argc, char __attribute__ ((unused))  *argv[])
{
int arg = argc - 1;
printf("%d\n", arg);
return (0);
}
