#include "holberton.h"
/**
 *
 *
 *
 * Return:
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = 0;
	char revs[];

	i = countstring(s, revs, i, j);
	revstring(s, revs, i, j);
	ispal(s, revs, i, j);
}
/**
 * ispal - checks if pal
 * Return: 0
 */
void countstring(char *s, int i)
{
	if (s[i] != '\0')
	{
		countstring(s, i++));
	}
}
/**
 * ispal - checks if pal
 * Return: 0
 */
void revstring(char *s, char *revs, int i, int j)
{
	if (s[j] != '\0')
	{
		*revs = s[i - 1];
		revstring(s, revs++, i--, j++);
	}
	return;
}
/**
 * ispal - checks if pal
 * Return: 0
 */
int ispal(char *s, char *revs, int i, int j)
{
	if (*s != *revs)
		return (0);
	if (*s == *revs && *s != '\0')
	{
		ispal(s++, revs++);
	}
	return (1);
}
