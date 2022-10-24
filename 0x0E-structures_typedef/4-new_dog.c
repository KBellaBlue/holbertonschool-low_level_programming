#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a  dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: dog or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	if (name2 == NULL)
	{
		free(newdog);
		free(owner);
		return (NULL);
	}
	if (owner2 == NULL)
	{
		free(newdog);
		free(name);
		return (NULL);
	}
	newdog->name = strcpy(newdog->name, name);
	newdog->age = strcpy(newdog->age, age);
	newdog->owner = strcpy(newdog->owner, owner);

	return (newdog);
}
