#include "holberton.h"

/**
 * str_concat - concatenates two strings into a new memory space
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string or null
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, j;

	if (s1[0] == '\0' && s2[0] == '\0')
		return ('\0');

	s3 = malloc(sizeof(s1) + sizeof(s2));

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	return (s3);
}
