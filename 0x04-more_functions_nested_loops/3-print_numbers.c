#include "holberton.h"

/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
