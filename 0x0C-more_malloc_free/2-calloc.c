#include "holberton.h"

/**
 * _calloc - allocates space and inits to 0
 * @nmemb: # of members
 * @size: size in bytes of each member
 *
 * Return: pointer to array or null
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
	return (ar);
}
