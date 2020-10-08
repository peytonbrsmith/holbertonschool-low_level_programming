#include "holberton.h"

/**
 * is_prime_number - tests an integer
 * @n: the integer
 *
 * Return: 1 if prime 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		s2++;
		return (wildcmp(s1, s2));
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	if (*s1 != '\0')
	{
		s1++;
		s2++;
		(wildcmp(s1, s2));
	}
	return (1);
}
