#include "holberton.h"

/**
 * _realloc - reallocs using mallocs
 * @ptr: ptr to beginning of memory allocated
 * @old_size: the old size of the allocation
 * @new_size: the new size of the allocation
 *
 * Return: the ptr or null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
