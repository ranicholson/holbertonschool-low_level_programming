#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *new_dog - function to create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 * Return: New dog!
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int x, y, z, a;

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	while (name[x])
		x++;

	while (owner[y])
		y++;

	ndog->name = malloc(sizeof(char) * (x + 1));

	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(sizeof(char) * (y + 1));

	if (ndog->owner == NULL)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}

	for (z = 0; z < x; z++)
		ndog->name[z] = name[z];

	for (a = 0; a < y; a++)
		ndog->owner[a] = owner[y];

	ndog->age = age;

	return (ndog);
}
