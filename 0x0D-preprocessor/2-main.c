#include "holberton.h"

/**
  * main - entry point
  *
  * Return: 0
  */

int main(void)
{
	char *p = __FILE__;

	while (*p)
	{
		_putchar(*p);
		p++;
	}
	_putchar(10);
	return (0);
}
