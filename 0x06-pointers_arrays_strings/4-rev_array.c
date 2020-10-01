#include "holberton.h"

/**
 * reverse_array - reverse the content of an array
 * @a: pointing to array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++, n--)
	{
		y = a[n - 1];
		a[n - 1] = a[x];
		a[x] = y;
	}
}
