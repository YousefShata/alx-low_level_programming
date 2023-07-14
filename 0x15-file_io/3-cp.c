#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int closing(FILE*);
/**
 * main - swap file contents
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int r = -1, w = -1, error = 0;
	FILE *file_to, *file_from;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = fopen(argv[1], "rb");
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	r = fread(buffer, 1, 1024, file_from);
	if (!r)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		closing(file_from);
		exit(98);
	}
	file_to = fopen(argv[2], "w");
	if (file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		closing(file_from);
		exit(99);
	}
	w = fwrite(buffer, 1, 1024, file_to);
	if (!w)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		closing(file_from);
		closing(file_to);
		exit(99);
	}
	error = closing(file_to);
	if (error < 0)
	{
		closing(file_from);
		exit(100);
	}
	error = closing(file_from);
	if (error < 0)
	{
		closing(file_to);
		exit(100);
	}
	return (0);
}

/**
 * closing - A function that closes a file and prints error when closed file
 * @description: Description error for closed file
 * Return: 1 on success, -1 on failure
 */
int closing(FILE *description)
{
	int error;
	int fd = fileno(description);

	error = fclose(description);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (error);
}
