#include "holberton.h"
/**
 * get_endianness - determines the type of multibyte data storage
 *
 * Return: 1 if Little 0 if Big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
