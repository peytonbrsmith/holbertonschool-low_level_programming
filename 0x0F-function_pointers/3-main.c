#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @argc: arg count
 * @argv: pointers to arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 4)
		exit (98);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}
