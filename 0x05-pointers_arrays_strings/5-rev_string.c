#include "holberton.h"

/**
 * rev_string - print string and newlione to stdout
 * @s: string to print
 *
 */

void rev_string(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		;

	for (; s[x - 1]; x--)
	{
		_putchar(s[x - 1]);
	}

	_putchar('\n');
}
