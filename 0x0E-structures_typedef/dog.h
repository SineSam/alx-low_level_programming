#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialises a variable of type structure dog
 * @d: pointer to structure dog
 * @name: name to initialise
 * @age: age to initialise
 * @owner: owner to initalise
 */

struct dog{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#endif
