#include "holberton.h"

/**
 * times_table - function to print times table
 */

void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			int z = x * y;

			_putchar(',');
			_putchar(' ');

			if (z >= 10)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
