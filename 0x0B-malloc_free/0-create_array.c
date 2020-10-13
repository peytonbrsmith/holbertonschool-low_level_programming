#include "holberton.h"

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to initialize it with
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return ('\0');

	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
