#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: elements of size bytes
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *alarr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alarr = malloc(nmemb * size);

	if (alarr == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		alarr[x] = 0;

	return (alarr);
}
