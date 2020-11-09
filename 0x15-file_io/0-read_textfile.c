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
	int fd, rd;
	int wrote;
	char array[letters];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(fd, array, letters);
	if (rd == -1)
		return (0);

	wrote = dprintf(STDOUT_FILENO, array);
	close(fd);
	return (wrote);
}
