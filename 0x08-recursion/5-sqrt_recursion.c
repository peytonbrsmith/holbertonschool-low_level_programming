#include "holberton.h"

/**
 * _sqrt_recursion - calculates the sqrt of a number using recursion
 * @n: the integer
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n > 1)
	{
		if (n % _sqrt_recursion(n - 1) == 0)
		{
			if (((_sqrt_recursion(n)) * (_sqrt_recursion(n))) == n)
			return (n);
		}
		n--;
	}
	return (_sqrt_recursion(n));
}
