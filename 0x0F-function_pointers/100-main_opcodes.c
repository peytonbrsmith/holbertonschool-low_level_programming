#include <stdio.h>
#include <stdlib.h>

/**
 * main - not much
 * @argc: arg count
 * @argv: arg pointers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bits;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	bits = atoi(argv[1]);
	if (bits < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
