#include "holberton.h"

/**
 * _strdup - allocates new array of memory for string to be stored
 * @str: the string to copy
 *
 * Return: pointer to array or null
 */
char *_strdup(__attribute__ ((unused)) char *str)
{
	char *ar;
	unsigned int i, size;

	if (str[0] == '\0')
		return ('\0');

	for (size = 0; *(str + size) != '\0'; size++)
		;

	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ar[i] = str[i];
	}

	return (ar);
}
