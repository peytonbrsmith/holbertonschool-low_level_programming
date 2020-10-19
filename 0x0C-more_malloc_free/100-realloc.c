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
	char *ptr2 = ptr;
	char *newptr;
	void *rtrnd;
	unsigned int i;

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
	if (new_size > old_size)
	{
		newptr = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			*(newptr + i) = *(ptr2 + i);
		}
		rtrnd = newptr;
		free(ptr);
		return (rtrnd);
	}
	return (ptr);
}
