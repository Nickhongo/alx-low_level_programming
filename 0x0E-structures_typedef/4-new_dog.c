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
	dog_t *newdog = (dog_t *)malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);
	newdog->name = strdup(name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = strdup(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->age = age;

	return (newdog);
}
