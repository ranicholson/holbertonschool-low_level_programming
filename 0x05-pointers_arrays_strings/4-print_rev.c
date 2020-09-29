#include "holberton.h"

/**
 * print_rev - print string and newlione to stdout
 * @str: string to print
 *
 */

void print_rev(char *str)
{
	int x;

	for (x = 0; str[x]; x++)
		;

	for (; str[x - 1]; x--)
	{
		_putchar(str[x - 1]);
	}

	_putchar('\n');
}
