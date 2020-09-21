#include <unistd.h>

int _putchar(char c);

/**
 * main - entry point
 *
 * Return: On success 0.
 */
int main(void)
{
	char hol = 'H';

	_putchar(hol);
	hol = 'o';
	_putchar(hol);
	hol = 'l';
	_putchar(hol);
	hol = 'b';
	_putchar(hol);
	hol = 'e';
	_putchar(hol);
	hol = 'r';
	_putchar(hol);
	hol = 't';
	_putchar(hol);
	hol = 'o';
	_putchar(hol);
	hol = 'n';
	_putchar(hol);
	_putchar(10);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
