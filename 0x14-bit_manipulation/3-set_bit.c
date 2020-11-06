#include "holberton.h"

/**
 * set_bit - sets the bit at index to 1
 * @n: the number
 * @index: the index location
 * Return: 1 if success or -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit = 1 << index;
	*n = (*n | bit);
	return (1);
}
