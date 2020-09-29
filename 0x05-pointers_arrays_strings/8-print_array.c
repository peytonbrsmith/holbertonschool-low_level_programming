#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints an array of n integers
 * @a: The array
 * @n: the number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 1; n--, i++)
	{
		printf("%d", *(a + i));
		if (n > 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
