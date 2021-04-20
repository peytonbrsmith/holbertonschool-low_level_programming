#include "search_algos.h"

/**
 * print_array - prints array
 * @array: the array to search
 * @r: the end of search
 * @l: the beginning of search
 */
void print_array(int *array, size_t r, size_t l)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i < r; i++)
	{
		if (i < r - 1)
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - searches array binarily
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: index of value in array or -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t m, l, r;

	if (array == NULL)
	{
		return (-1);
	}
	
	l = 0;
	r = size - 1;

	print_array(array, size, 0);

	while (l <= r)
	{
		m = (l + r) / 2;

		if (array[m] == value)
		{
			return (m);
		}
		if (array[m] < value)
		{
			if (m < r)
				print_array(array, r + 1, m + 1);
			l = m + 1;
		}
		else
		{
			print_array(array, m, l);
			r = m - 1;
		}
	}
	return (-1);
}
