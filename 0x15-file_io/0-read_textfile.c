#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: filename
 * @letters: number of letters to be printed
 *
 * Return: actual number of letters it reads and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t no_read, no_write;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	no_read = read(fd, buf, letters);
	no_write = write(STDOUT_FILENO, buf, no_read);

	if (no_write == -1)
		return (0);

	close(fd);
	free(buf);

	return (no_write);
}
