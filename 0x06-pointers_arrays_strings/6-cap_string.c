#include "holberton.h"

/**
 * cap_string - capitalizes the letters after delimeters
 * @s: the string
 *
 * Return: string.
 */

char *cap_string(char *s)
{
	int x = 0;
	int y = 1;
	char *returnptr = s;
	char *del = "\t\n;. ,!?\"(){}\0";

	while (*s)
	{
		if (y == 1)
		{
			if (*s >= 'a' && *s <= 'z')
			{
				*s -= 32;
			}
			y = 0;
		}

		for (x = 0; del[x]; x++)
		{
			if (*s == del[x])
				y = 1;
		}
		s++;
	}
	return (returnptr);
}
