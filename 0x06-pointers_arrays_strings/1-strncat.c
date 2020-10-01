#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - concatenates n length of string to another string
 * @dest: the destination string
 * @src: the source string
 * @n: max or min length of added string
 *
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1 = 0;
	int len2 = 0;

	while (*(src + len1) != '\0')
		len1++;
	while (*(dest + len2) != '\0')
		len2++;

	for (i = 0; i <= len1 && i < n; i++)
		*(dest + (len2 + i)) = *(src + i);

	if (n < len1)
	{
		for (i = 0; i <= (len1 - n); i++)
		{
			*(dest + (len2 + len1)) = '\0';
		}
	}
	return (dest);
}
