#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - returns index of element in array
 * @array: array to check integers of
 * @size: size of array
 * @cmp: pointer to function that compares values
 * Return: Index of element determined by cmp function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x, y;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x =0; x < size; x++)
	{
		y = cmp(array[x]);

		if ( y != 0)
			return (x);
	}

	return (-1);
}
