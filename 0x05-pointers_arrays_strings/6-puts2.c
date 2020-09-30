#include "holberton.h"

/**
 * puts2 - trying to print every other character in a string
 * @str: string to print characters from
 *
 */

void puts2(char *str)
{
	int x;
	int y;

	for (y = 0; str[y] != '\0'; y++)
		;

	for (x = 0; x < y; x++)
		{
			if (x % 2 == 0)
				_putchar(str[x]);
		}
	_putchar('\n');
}
