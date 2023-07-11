#include "main.h"
#include <string.h>
/**
 * create_file - creates a file and adds permission to it
 * @filename: The name of the file to be created
 * @text_content: content to be placed in the created file
 * Return: 1 if successfull and -1 on err.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t f = 0, c = 0;
	int size = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (f < 0)
		return (-1);
	size = strlen(text_content);

	c = write(f, text_content, size);
	if (c < 0)
		return (-1);

	close(f);
	return (1);
}
