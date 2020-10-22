#include "function_pointers.h"

/**
 * main - check the code for Holberton School students.
 * @argc: arg count
 * @argv: pointers to arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	(*get_op_func(argv[2]))(num1, num2);
	return (0);
}
