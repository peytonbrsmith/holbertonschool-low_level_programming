#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - copies n length of string to another string
 * @dest: the destination string
 * @src: the source string
 * @n: max or min length of added string
 *
 * Return: pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len1 = 0;

	while (*(src + len1) != '\0')
		len1++;

	for (i = 0; i <= len1 && i < n; i++)
		*(dest + (i)) = *(src + i);

	return (dest);
}
