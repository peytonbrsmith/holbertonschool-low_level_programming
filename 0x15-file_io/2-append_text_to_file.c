#include "holberton.h"
/**
 * append_text_to_file - appends text to an existing file
 * @filename: pointer to filename/path
 * @text_content: the content to be printed
 * Return: 1 on success or -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
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
