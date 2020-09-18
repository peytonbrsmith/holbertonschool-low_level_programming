#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 122;

	while (alphabet >= 97)
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar(10);
	return (0);
}
