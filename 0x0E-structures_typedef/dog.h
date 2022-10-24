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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

