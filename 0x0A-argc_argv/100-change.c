#include "holberton.h"

/**
 * main - min change
 * @argc: argument count
 * @argv: pointer to arguments passed
 *
 * Return: 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{


	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	return (0);
}
