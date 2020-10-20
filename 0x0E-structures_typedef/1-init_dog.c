#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type dog struct
 * @d: pointer to dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
