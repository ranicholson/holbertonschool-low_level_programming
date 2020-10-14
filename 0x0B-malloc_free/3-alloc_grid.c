#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to 2 dimensional array of int
 * @width: width of array
 * @height: height of array
 * Return: NULL if height or width is 0 or less, or if failure. Return pointer
 * to array upon success
 */

int **alloc_grid(int width, int height)
{
	int x, y, z;
	int **array;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		array[x] = malloc(sizeof(int) * width);

		if (array[x] == NULL)
		{
			for (z = 0; z <= x; z++)
				free(array[z]);

			free(array);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			array[x][y] = 0;
	}
	return (array);
}
