#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function to execute a parameter on each element of array
 * @array: array to execute
 * @size: size of array
 * @action: action to perform on array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
