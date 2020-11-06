#include "holberton.h"
/**
  * get_bit - returns the value of a bit index of a number
  * @n: the number
  * @index: the index location
  * Return: 0 or 1 on success, -1 on fail
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	n >>= index;
	return (n & 1);
}
