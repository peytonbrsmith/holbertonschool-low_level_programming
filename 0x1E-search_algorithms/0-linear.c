#include "search_algos.h"

/**
 * linear_search - searches array linearly
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: index of value in array or -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size && array != NULL; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
