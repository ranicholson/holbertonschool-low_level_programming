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
	int x = 0, y = 0, z, a;
	char *na, *ow;

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	while (name[x] != '\0')
		x++;

	while (owner[y] != '\0')
		y++;

	na = malloc(x + 1 * sizeof(char));

	if (na == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ow = malloc(sizeof(char) * y + 1);

	if (ow == NULL)
	{
		free(na);
		free(ndog);
		return (NULL);
	}
	for (z = 0; z < x; z++)
		na[z] = name[z];
	na[z] = '\0';

	for (a = 0; a < y; a++)
		ow[a] = owner[y];
	ow[a] = '\0';

	ndog->name = na;
	ndog->age = age;
	ndog->owner = ow;

	return (ndog);
}
