#include "dog.h"

/**
 * init_dog - initializes a dog struct with info
 * @d: pointer to the struct
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to age of owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
