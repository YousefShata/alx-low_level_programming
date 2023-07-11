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
	ssize_t f = 0;
	char *chars;

	if (!filename || !letters)
		return (0);

	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);
	chars = malloc(sizeof(char) * (letters));
	if (chars == NULL)
		return (0);

	c = read(f, chars, letters);
	c = write(STDOUT_FILENO, chars, c);
	if (c < 0)
		return (0);
	close(f);
	free(chars);
	return (c);
}
