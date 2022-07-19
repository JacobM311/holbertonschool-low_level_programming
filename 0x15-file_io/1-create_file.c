#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: content to be passed to file
 * Return: 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fo, fw, length;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);


	if (fo == -1)
		return (-1);

	length = _strlen(text_content);

	fw = write(fo, text_content, length);

	if (fo == -1 || fw == -1)
		return (-1);



	close(fo);
	return (1);
}

/**
 * _strlen - get length of string
 * @c: string
 * Return: int length of string
 */

int _strlen(char *c)
{
	int i = 0;

	while (*c != '\0')
	{
		i++;
		c++;
	}
return (i);
}
