#include "holberton.h"
#include <stddef.h>
/**
 * binary_to_uint - convert binary numbers to unsigned integers
 * @b: pointer to string of bits
 * Return: the unsigned int value of the binary string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int x = 0;
	unsigned int y = 1;
	int place;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}

	for (place = (i - 1); place >= 0; place--)
	{
		if (b[place] == '1')
		{
			x += y;
		}
		y *= 2;
	}
	return (x);
}
