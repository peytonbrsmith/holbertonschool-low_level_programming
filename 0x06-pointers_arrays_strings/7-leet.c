#include "holberton.h"

/**
 * rot13 - check the code for Holberton School students.
 * @s: the string passed
 *
 * Return: the string pointer.
 */

char *rot13(char *s)
{
	int x;
	char *og = "aAeEoOtTlL";
	char *coded = "4433007711";
	char *rtn = s;

	while (*s)
	{
		x = 0;
		while (og[x])
		{
			if (*s == og[x])
			{
				*s = coded[x];
				break;
			}
			x++;
		}
		s++;
	}
	return (rtn);
}
