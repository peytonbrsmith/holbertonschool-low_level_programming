#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @a: the variable we are taking the last digit of.
 *
 * Return: value of last digit.
 */

int print_last_digit(int a)
{
	int lstdgt;

	lstdgt = (a % 10);

	return (lstdgt);
}
