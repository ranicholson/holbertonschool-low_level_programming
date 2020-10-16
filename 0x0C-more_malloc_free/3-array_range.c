#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function to create an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: Pointer to the array, or NULL if things go poorly
 */

int *array_range(int min, int max)
{
	int x, y;
	int *arri;

	if (min > max)
		return (NULL);

	y = max -min + 1;

	arri = malloc(sizeof(int) * y);

	if (arri == NULL)
		return (NULL);

	for (x = 0; x < y; x++)
		arri[x] = min + x;

	return (arri);

}
