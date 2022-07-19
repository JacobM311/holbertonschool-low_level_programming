#include "main.h"

/**
 * read_textfile - reads a file and writes to stdout
 * @filename: file to be read
 * @letters: amount of letters available to be read
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, print, buffer, length;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, 0_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	length = read(fd, buffer, letters);

	print = write(STDOUTT_FILENO, buffer, length);

	if (length == -1 || print == -1)
	{
		return (0);
	}

	free(buffer);
	close(fd);
	return (print);
}
