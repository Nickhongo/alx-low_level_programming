#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Descrription: struct
 * Return: return new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *cowner = strdup(owner);
	char *cname = strdup(name);
	dog_t *newdog = (dog_t *)malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	if (newdog == NULL)
		return (NULL);
	if (cname == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = cname;
	newdog->owner = strdup(owner);
	if (cowner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->age = age;

	return (newdog);
}
