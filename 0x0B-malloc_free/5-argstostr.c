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
	int i, j, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	ns = malloc(ac * sizeof(int *));	
	if (ns == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (len = 0, j = 0; av[i][j] != '\0'; j++, len++)
			;
		ns[i] = malloc((len + 1) * sizeof(char));
	}
	return (ns);
}
