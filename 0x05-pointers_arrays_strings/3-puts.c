#include "holberton.h"

/**
 * _puts - print string and newlione to stdout
 * @str: string to print
 *
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x]; str++)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
