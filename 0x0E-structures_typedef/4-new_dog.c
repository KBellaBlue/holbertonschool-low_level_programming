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
	char *name2;
	char *owner2;

	name2 = name;
	owner2 = owner;

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
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
