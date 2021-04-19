#include "search_algos.h"

/**
 * binary_search - function to perform binary search on sortered array
 * @array: pointer to first element of array to search
 * @size: size of array to search
 * @value: value to search for in array
 * Return: index where value is located or -1 if it is not successfully located
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid = (high + low) / 2, x = 0;

	if (array == NULL)
		return (-1);

	if (value == array[mid])
		return (mid);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (x = low; x <= high; x++)
		{
			if (x == high)
				printf("%d\n", array[x]);
			else
				printf("%d, ", array[x]);
		}
		mid = (high + low) / 2;
		if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
