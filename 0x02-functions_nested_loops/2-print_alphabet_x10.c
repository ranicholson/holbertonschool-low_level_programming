#include "holberton.h"

/**
 * print_alphabet_x10 - trying to print out the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int y;
	char x;

	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
		_putchar(x);
		}
	_putchar('\n');
	}
}
