#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include<string.h>

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

	if (name == NULL)
	{
		free(newdog);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(newdog);
		free(name);
		return (NULL);
	}
	newdog->name = strcpy(newdog->name, name);
	newdog->age = age;
	newdog->owner = strcpy(newdog->owner, owner);

	return (newdog);
}
