#include "holberton.h"

/**
 * reverse_array - puts a string to stdout reversed
 * @a: the array
 * @n: the size of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int up, down;

	for (up = 0, down = (n - 1) ; up < down; up++, down--)
	{
		int temp = *(a + up);
		*(a + up) = *(a + down);
		*(a + down) = temp;
	}
}
