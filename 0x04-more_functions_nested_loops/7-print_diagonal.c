#include "holberton.h"

/**
 * print_diagonal - prints \ alot
 * @n: number of dashes
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int spaces;

	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			_putchar(92);
			for (spaces = 0; spaces <= n; spaces++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
