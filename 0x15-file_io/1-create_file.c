#include "holberton.h"
/**
 * create_file - creates a file of filename with content text_content
 * @filename: pointer to filename/path
 * @text_content: the content to be printed
 * Return: the number of letters successfully read AND printed
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		wr = write(fd, text_content, i);
		if (wr == -1)
			return (-1);
	}
	return (1);
}
