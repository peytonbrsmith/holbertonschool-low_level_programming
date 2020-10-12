#include "holberton.h"

/**
 * main - min change
 * @argc: argument count
 * @argv: pointer to arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int chng;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	chng = atoi(argv[1]);
	if (chng < 0)
	{
		printf("0\n");
		return (0);
	}
	while (chng != 0)
	{
		if (chng >= 25)
			chng = chng - 25;
		else if (chng >= 10)
			chng = chng - 10;
		else if (chng >= 5)
			chng = chng - 5;
		else if (chng >= 2)
			chng = chng - 2;
		else if (chng >= 1)
			chng = chng - 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
