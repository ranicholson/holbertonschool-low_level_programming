#include "holberton.h"

/**
 * print_line - function to draw a straight line
 * @n: number of lines to print
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
		;
	else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
