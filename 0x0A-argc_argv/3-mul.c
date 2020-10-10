#include "holberton.h"

/**
 * main - multiples arguments
 * @argc: argument count
 * @argv: pointer to arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	int mul;

	mul = atoi(argv[argc - 2]) * atoi(argv[argc - 1]);
	printf("%d\n", mul);
	return (0);
}
