#include "holberton.h"

/**
 * puts2 - trying to print every other character in a string
 * @str: string to print characters from
 *
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x]; x = (x + 2))
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
