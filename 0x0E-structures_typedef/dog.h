#ifndef DOG_H
#define DOG_H

int _putchar(char c);
/**
 * struct dog - ownership of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: ownership of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif /* DOG_H */
