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
		if (alphabet != 101 && alphabet != 113)
			putchar(alphabet);
		alphabet++;
	}
	putchar(10);
	return (0);
}
