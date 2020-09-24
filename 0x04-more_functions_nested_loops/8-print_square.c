#include "holberton.h"

/**
 * print_square - prints a square of size size.
 * @size: the size of the desired square
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
