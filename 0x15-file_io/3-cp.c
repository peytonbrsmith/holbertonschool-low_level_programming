#include "holberton.h"
/**
 * main - copies content of one file to another
 * @ac: arg count
 * @av: argument pointers
 * Return: number of successfully copied chars
 */
int main(int ac, char **av)
{
	int fd1, fd2, rd, wr;
	char *buf;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd1 = open(av[1], O_RDONLY);

	buf = malloc(1024);
	if (buf == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	rd = read(fd1, buf, 1024);
	if (fd1 == -1 || rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	wr = write(fd2, buf, rd);

	close(fd1);
	close(fd2);
	free(buf);
	return (wr);
}
