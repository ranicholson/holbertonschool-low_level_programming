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
	int y;
	int z = 0;
	int b = 0;

	for (x = 0; x <= size; x++)
	{
		for (y = 0; y <= size; y++)
		{
			if (x == y)
			{
				z += a[x][y];
			}

			if ((x + y) == size)
			{
				b += a[x][y];
			}
		}
	}

	printf("%d, %d\n", z, b);
}
