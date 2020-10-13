#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - function to create array of characters
 * @size: size of array
 * @c: contents of string
 * Return: Null if the size is 0 or if it fails, and a pointer
 * to the array upon success
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);
}
