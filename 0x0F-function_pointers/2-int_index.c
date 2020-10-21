#include "function_pointers.h"
/**
 * array_iterator - iteratates an array through a function
 * @array: the array of integers
 * @size: the size of the array
 * @action: the function pointer
 *
 * Return void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (((*cmp)(array[i])) == 1)
			break;
	}
	return (i);
}
