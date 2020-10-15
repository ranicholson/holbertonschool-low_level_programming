#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *malloc_checked - function to allocate memory
 * @b: Amount of memory to allocate.
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);

	if (alloc == NULL)
		exit(98);

	return (alloc);
}
