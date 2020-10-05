#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: an int value less than greater to or equal to 0
 */

int _strcmp(char *s1, char *s2)
{
	int ret;

	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break;
	}

	ret = *s1 - *s2;
return (ret);
}
