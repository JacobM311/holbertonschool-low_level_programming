#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open (filename, 0_RDONLY);

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

	print = write(STDOUTT_FILENO, buffer, length):

	if (length == -1 || print == -1)
	{
		return (0);
	}

	free(buffer);
	close(fd);
	return (print);
}
