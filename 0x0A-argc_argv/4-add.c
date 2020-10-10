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
        int i;
/*
	for (i = 0; i < argc; i++)
	{
		if (isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
*/
	while (*argv)
	{
		if (isdigit(argv) == 0)
		{
			printf("Error\n");
			return (1);
		}
		argv++;
	}
	printf("They are all ints");
	return (0);
}
