#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialises a variable
 * @d: struct to initialise
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
