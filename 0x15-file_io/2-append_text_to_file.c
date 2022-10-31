#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 *
 * @filename: name of file
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd, txt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		txt = write(fd, text_content, i);

		if (txt == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
