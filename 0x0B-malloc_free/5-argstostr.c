#include "holberton.h"

/**
 * argstostr - takes args and makes string out of em'
 * @ac: arg count
 * @av: pointer to arguments
 * Return: void
 */
char *argstostr(int ac, char **av)
{
	char *ns;
	int i, x, y;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size = size + sizeof(av[i]);
	size = size + (5 * sizeof(char));
	ns = malloc(size);
	if (ns == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
        {
		for (y = 0; *av[y] < ac; y++)
		{
			for (x = 0; av[y][x] != '\0'; x++)
				ns[i] = av[y][x];
		}
		if (*av[y] < (ac - 1))
		{
			i++;
			ns[i] = '\n';
		}
	}
	return (ns);
}
