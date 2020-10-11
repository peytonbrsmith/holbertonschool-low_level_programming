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
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				if (argv[i][j] == '-' && argv[i][j + 1] != '\0')
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
		sum = sum + atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
