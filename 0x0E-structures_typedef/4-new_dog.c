#include "dog.h"

/**
 * _strdup - allocates new array of memory for string to be stored
 * @str: the string to copy
 *
 * Return: pointer to array or null
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	for (size = 0; *(str + size) != '\0'; size++)
		;
	ar = malloc((size + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog;
	char *newname;
	char *newowner;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	newname = _strdup(name);
	if (newname == NULL)
	{
		free(newname);
		return (NULL);
	}
	newowner = _strdup(owner);
	if (newowner == NULL)
        {
                free(newowner);
                return (NULL);
        }
	dog->name = newname;
	dog->age = age;
	dog->owner = newowner;
	return (dog);
}
