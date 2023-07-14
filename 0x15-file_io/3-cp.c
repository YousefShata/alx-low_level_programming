#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int closing(int);
/**
 * main - swap file contents
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int r = 1, w = 0, error = 0, file_to = -1, file_from = -1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		closing(file_from);
		exit(99);
	}
	while (r)
	{
		r = read(file_from, buffer, 1024);
		if (r < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			closing(file_from);
			closing(file_to);
			exit(98);
		}
		else if (r == 0)
			break;
		w = write(file_to, buffer, r);
		if (w < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			closing(file_from);
			closing(file_to);
			exit(99);
		}
	}
	error = closing(file_to);
	if (error < 0)
	{
		closing(file_from);
		exit(100);
	}
	error = closing(file_from);
	if (error < 0)
		exit(100);
	return (0);
}

/**
 * closing - A function that closes a file and prints error when closed file
 * @description: Description error for closed file
 * Return: 1 on success, -1 on failure
 */
int closing(int description)
{
	int error;

	error = close(description);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", description);
	return (error);
}
