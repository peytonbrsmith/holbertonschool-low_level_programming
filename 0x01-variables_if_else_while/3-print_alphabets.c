#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 97;

	while (alphabet < 123)
	{
		putchar(alphabet);
		alphabet++;
	}
	alphabet = 65;
	while (alphabet < 91)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar(10);
	return (0);
}
