#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to STDOUT
 * @filename: pointer to filename/path
 * @letters: the number of characters to be printed from filename
 *
 * Return: the number of letters successfully read AND printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);

	close(fd);
	free(buf);
	return (wr);
}
