#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: text to be appended
 * Return: 1 or -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fw, length;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	length = _strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);

	fw = write(fd, text_content, length);

	if (fd == -1 || fw == -1)
		return (-1);

	close(fd);
	return (1);
}

/**
 * _strlen - string length
 * @c: string
 * Return: length.
 */

int _strlen(char *c)
{
	int i = 0;

	while (*c != '\0')
	{
		c++;
		i++;
	}
return (i);
}
