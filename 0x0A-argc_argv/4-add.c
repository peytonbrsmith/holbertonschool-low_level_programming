#include "holberton.h"

/**
 * main - adds arguments together
 * @argc: argument count
 * @argv: pointer to arguments passed
 *
 * Return: 0 if success, 1 if fail
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]) == 0 && *argv[i] != '-')
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
