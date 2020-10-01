#include "holberton.h"

/**
 * string_toupper - convers lowercase string characters to upper
 * @s: the string
 *
 * Return: string.
 */

char *cap_string(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if(s[x] >= 97 && s[x] <= 122)
		{
			if (s[x-1] >= 32 && s[x-1] <= 34)
				*(s + x) = s[x] - 32;
			else if ((s[x-1] >= 39) && (s[x-1] <= 41))
				*(s + x) = s[x] - 32;

		}
		x++;
	}
	return (s);
}
