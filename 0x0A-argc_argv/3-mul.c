#include "holberton.h"

/**
 * main - prints argument count
 * @argc: argument count
 * @argv: pointer to arguments passed
 *
 * return: void
 */
int main(int argc, char *argv[])
{
	int mul;

	mul = atoi(argv[argc - 2]) * atoi(argv[argc -1]);
	printf("%d\n", mul);
	return (0);
}
