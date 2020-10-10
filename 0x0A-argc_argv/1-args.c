#include "holberton.h"

/**
 * main - prints argument count
 * @argc: argument count
 * @argv: pointer to arguments passed
 *
 * Return: 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
