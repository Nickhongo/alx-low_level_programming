#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a new variable
 * @d: pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: returns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
