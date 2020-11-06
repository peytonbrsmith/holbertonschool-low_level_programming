#include "holberton.h"

/**
  * clear_bit - sets the bit at index to 0
  * @n: the number
  * @index: the index location
  * Return: 1 if success or -1 if fail
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (n == NULL)
		return (-1);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = 1 << index;

	*n = (*n & ~bit);

	return (1);
}
