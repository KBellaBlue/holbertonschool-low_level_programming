#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 *
 * Return: 0 on success
 *
 **/
int _strlen(char *s)
{

	int count = 0;

	if (*s != '\0')
	{
		while (*(s + count) != '\0')
			count++;
	}
	return (count);
}

/**
 * _strcpy - copies the string with \0 to the buffer
 * @dest: pointer to dest
 * @src: pointer to string
 *
 * Return: the pointer to dest
 *
 **/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
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
	int name_size, owner_size;
	struct dog *newdog;

	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
		return (NULL);

	name_size = _strlen(name);
	newdog->name = malloc(sizeof(char) * (name_size + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	owner_size = _strlen(owner);
	newdog->owner = malloc(sizeof(char) * (owner_size + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->name = _strcpy(newdog->name, name);
	newdog->age = age;
	newdog->owner = _strcpy(newdog->owner, owner);

	return (newdog);
}
