#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int x, y, s, p;

	if (size > 0 && size != 1)
	{
		for (y = 1; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				for (s = (size-x); s > 0; s--)
					_putchar(' ');
				for (p = 1; p <= y; p++)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size == 1)
		_putchar('#');
	else
		_putchar('\n');
}
