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
	char *ta = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *rtn = s;

	while (*s)
	{
		x = 0;
		while (ta[x])
		{
			if (*s == ta[x])
			{
				*s = rot[x];
				break;
			}
			x++;
		}
		s++;
	}
	return (rtn);
}
