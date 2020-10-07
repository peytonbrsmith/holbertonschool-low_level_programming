#include "holberton.h"

/**
 * _sqrt_recursion - calculates the sqrt of a number using recursion
 * @n: the integer
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	return (findsq(n, x));
}

int findsq(int n, int x)
{
	if ((x * x) > n)
		return (-1);
	if ((x * x) == n)
		return (x);
	return (findsq(n, (x + 1)));
}
