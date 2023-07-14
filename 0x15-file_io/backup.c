#include "main.h"
#include <stdlib.h>

/**
 * main - swap file contents
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	char buffer[1024], *content;
	FILE file_to, file_from;

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
	file_to = fopen(arg[2], "w");
	if (file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		closing(file_from);
		exit(99);
	}
	fseek(f, 0, SEEK_END);
        file_size = ftell(file);

        fseek(f, 0, SEEK_SET);

        content = malloc(file_size + 1);
        if(cotent == NULL)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
                exit(98);
        }

        if(fread(content, 1, buffer, f) > size)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
                exit(98);
        }

	fwrite(content, 1, buffer, f);

}

/**
 * get_content - get the content of specific file
 * @f: input file
 * Return: size of the length
 */
char* get_content(FILE f, char *buffer)
{
	char *content;
	int file_size;

	fseek(f, 0, SEEK_END);
	file_size = ftell(file);

	fseek(f, 0, SEEK_SET);
	
	content = malloc(file_size + 1);
	if(cotent == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
		exit(98);
	}
	
	if(fread(content, 1, buffer, f) > size)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
		exit(98);
	}
	return (content);
}


/**
 * safe_close - A function that closes a file and prints error when closed file
 * @description: Description error for closed file
 * Return: 1 on success, -1 on failure
 */
int closing(FILE description)
{
	int error;

	error = fclose(description);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", description);
	return (error);
}
