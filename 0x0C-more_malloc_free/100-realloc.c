#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocate memory using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated memory
 * @new_size: new size of memory needed
 * Return: pointer to allocated memory or NULL if fail
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x, *y;
	unsigned int z;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	x = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (x == NULL)
		return (NULL);

	y = ptr;

	if (old_size > new_size)
		old_size = new_size;

	for (z = 0; z < old_size; z++)
		x[z] = y[z];

	free(ptr);
	return (x);
}
