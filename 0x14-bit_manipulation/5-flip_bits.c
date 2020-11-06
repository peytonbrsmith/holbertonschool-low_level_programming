#include "holberton.h"

/**
 * flip_bits - returns the number of bit flips needed to match
 * @n: first num
 * @m: second num
 *
 * Return: flips needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips;

	for (flips = 0; m || n; m >>= 1, n >>= 1)
	{
		if ((m & 1) ^ (n & 1))
			flips++;
	}
	return (flips);
}
