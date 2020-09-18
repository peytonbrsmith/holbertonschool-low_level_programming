#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex = 48;

	while (hex < 58)
	{
		putchar(hex);
		hex++;
	}
	hex = 97;
	while (hex < 103)
	{
		putchar(hex);
		hex++;
	}
	putchar(10);
	return (0);
}
