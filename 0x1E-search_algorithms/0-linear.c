#include "search_algos.h"

/**
* linear_search - function to search array using linear search algorithm
* @array: array to search
* @size: size of array
* @value: value to search for
* Return: index where value is first located or -1 if not found
*/

int linear_search(int *array, size_t size, int value)
{
	int x = 0, y = size;

	if (array == NULL)
		return (-1);

	while (x < y)
	{
		printf("Value checked array [%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x += 1;
	}
	return (-1);
}
