#include "main.h"
#include <string.h>
/**
 * append_text_to_file - This function adds text at EOF
 * @filename: name of the file to append data to.
 * @text_content: data to append to file
 * Return: 1 if succesfull else -1 on err
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f = 0, c = 0, size = 0;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);
	if (text_content)
	{
		size = strlen(text_content);

		c = write(f, text_content, size);
		if (c < 0)
			return (-1);
	}
	close(f);
	return (1);

}
