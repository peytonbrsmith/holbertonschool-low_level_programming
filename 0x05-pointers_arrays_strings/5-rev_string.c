#include "holberton.h"

/**
 * rev_string - puts a string to stdout reversed
 * @s: the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int up, down;

	while (*(s + len) != '\0')
		len++;

	int temps[10];

	for (up = 0, down = (len - 1); up < len; up++, down--)
	{
		*(temps + down) = *(s + up);
	}

	for (up = 0; up < len; up++)
	{
		*(s + up) = *(temps + up);
	}
}
