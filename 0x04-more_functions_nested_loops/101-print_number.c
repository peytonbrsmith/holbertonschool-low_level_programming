#include "holberton.h"

/**
  * getdigits - gets the individual digits of the number
  * @n: the number
  *
  * Return: void
  */

void getdigits(int n)
{
	if (n > 0)
		getdigits(n / 10);
	if (n != 0)
	_putchar('0' + (n % 10));
}

/**
  * print_number - prints a number
  * @n: the number to print
  *
  * Return: void
  */

void print_number(int n)
{
	int ld = 1;

	if (n < 0)
	{
		_putchar('-');
		ld = n % 10;
		n = n / -10;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}
	getdigits(n);
	if (ld < 0)
		_putchar('0' - ld);
}
