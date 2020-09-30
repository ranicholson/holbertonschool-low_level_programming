#include "holberton.h"
#include <stdio.h>

/**
 * print_array - printing the elements of an array
 * @a: array
 * @n: element of array
 *
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x < n - 1)
			printf(", ");
	}

	printf("\n");
}
