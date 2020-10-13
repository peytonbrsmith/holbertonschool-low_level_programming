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

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (size = 0; *(str + size) != '\0'; size++)
		;
	ar = malloc((size + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}
