#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - print the sum of the two diagonals of square matrix
 * @a: string with numbers to fill square
 * @size: size of matrix to make
 */

void print_diagsums(int *a, int size)
{
	int x;
	int z = 0;
	int b = 0;

	for (x = 0; x < (size * size); x++ )
	{
		z += a[x];
		x = x + size;
	}

	for (x = size - 1; x < (size * size - 1); x += size - 1)
	{
		b += a[x];
	}

	printf("%d, %d\n", z, b);
}
