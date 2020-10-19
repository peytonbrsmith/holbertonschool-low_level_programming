#include "dog.h"

/**
 * print_dog - prints the struct elements of a dog
 * @d: pointer to the dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Owner: %s\n", d->owner);
}
