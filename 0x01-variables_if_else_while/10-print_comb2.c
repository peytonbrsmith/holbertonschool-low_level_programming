#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter = 0;

	while (counter < 100)
	{
		putchar(counter / 10 + 48);
		putchar(counter % 10 + 48);
		if (counter < 99)
		{
			putchar(',');
			putchar(' ');
		}
		counter++;
	}
	putchar(10);
	return (0);
}
