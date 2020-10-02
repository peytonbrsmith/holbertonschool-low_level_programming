#include "holberton.h"

/**
 * rot13 - check the code for Holberton School students.
 * @s: the string passed
 *
 * Return: the string pointer.
 */

char *rot13(char *s)
{
	int x = 0, y = 0;
	char ta[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMabcdefghijklmnopqrstuvwxyzabcdefghijklm";

	while (*(s + x) != '\0')
	{
		while (ta[y] != '\0')
		{
			if (*(s + x) == *(ta + y))
			{
				*(s + x) = *(ta + (y + 13));
			}
			y++;
		}
		x++;
	}
    return (s);
}
