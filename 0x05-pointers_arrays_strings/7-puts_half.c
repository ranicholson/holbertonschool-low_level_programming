#include "holberton.h"

/**
 * puts_half - print half of a string
 * @str: string to print
 *
 */

void puts_half(char *str)
{
	int x;
	int y;

	for (x = 0; str[x]; x++)
		;

	if (x % 2 != 0)
		x++;

	y = x / 2;

	for (; str[y] != '\0'; y++)
	{
		_putchar(str[y]);
	}

	_putchar('\n');
}
