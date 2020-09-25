#include "holberton.h"

/**
 * print_triangle - draw a nice triangle
 *@size: How long the line should be
 *
 */

void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y > 0; y--)
				_putchar(' ');

			for (y = 0; y < x; y++)
				_putchar('#');

			if (x == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
