#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd, fw, length;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = " ";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	length = _strlen(text_content);

	fw = write(fd, text_content, length);

	if (fd == -1 || fw == -1)
		return(-1);

	close(fo);
	return(1);
}
