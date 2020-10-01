#include "holberton.h"

/**
 * string_toupper - convers lowercase string characters to upper
 * @s: the string
 *
 * Return: string.
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 97 && s[x] <= 122)
		{
			*(s + x) = (s[x] - 32);
		}
		x++;
	}
	return (s);
}
