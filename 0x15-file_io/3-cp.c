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
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	rd = read(fd1, buf, 1024);
	wr = write(fd2, buf, rd);
	while (rd > 0)
	{
		rd = read(fd1, buf, 1024);
		wr = write(fd2, buf, rd);
	}
	if (fd1 == -1 || rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	close(fd1);
	close(fd2);
	return (wr);
}
