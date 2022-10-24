#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - let the dogs out
 *
 * @d:structure of dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
