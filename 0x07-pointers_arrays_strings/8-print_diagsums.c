#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagnals
 * @a: a 2D array of ints
 * @size: the size of the array
 *
 * Return: always void
 */
void print_diagsums(int *a, int size)
{
	int x = 0, y = 0;
	int i;

	for (i = 0; i < (size * size); i = (i + size + 1))
		x = x + a[i];
	for (i = size - 1; i < (size * size - 1); i = (i + size - 1))
		y = y + a[i];
	printf("%d, %d\n", x, y);
}
