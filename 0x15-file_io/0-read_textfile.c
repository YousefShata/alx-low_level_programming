#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - read a textfile and print it
 * @filename: filename
 * @letters: the size of the file
 * Return: the number of letters in file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t c = 0;
	FILE *f;
	char *chars;

	if (!filename || !letters)
		return (0);

	f = fopen(filename, "r");

	chars = malloc(sizeof(letters) * letters);
	if (chars == NULL)
		return (0);

	c = fread(chars, sizeof(char), letters, f);

	c = fwrite(chars, sizeof(char), c, stdout);
	if (c < 0)
		return (0);
	fclose(f);
	return (c);
}
