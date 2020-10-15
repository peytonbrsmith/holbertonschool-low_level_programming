#include "holberton.h"

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ar;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	i = nmemb * size;
	ar = (int *) malloc(i);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		ar[i] = 0;
     	}

	return (ar);
}
