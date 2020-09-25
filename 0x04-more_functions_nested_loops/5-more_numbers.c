#include "holberton.h"

/**
 * more_numbers - print numbers 0 to 9 10 times
 *
 * Return: no return expected
 */

void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
