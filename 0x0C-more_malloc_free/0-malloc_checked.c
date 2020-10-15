#include "holberton.h"

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = (void *)malloc(b);
	if (ar == NULL)
		exit (98);
	return(ar);
}
