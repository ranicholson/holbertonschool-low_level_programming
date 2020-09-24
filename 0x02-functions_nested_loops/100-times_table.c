#include "holberton.h"

/**
 * print_times_table - function to print times table
 * @n: number to use in times table
 */

void print_times_table(int n)
{
	int x;
	int y;

	if (n > 15 || n < 0)
		_putchar('\n');

	else
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				int z = x * y;

				_putchar(',');
				_putchar(' ');

				if (z >= 10 && z < 100)
				{
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z >= 100)
				{
					_putchar((z / 100) + '0');
					_putchar(((z / 10) / 10) + '0');
					_putchar((z % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
			}
			_putchar('\n');
		}
	}
}
