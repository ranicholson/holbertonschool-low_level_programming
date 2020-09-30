#include "holberton.h"

/**
 * rev_string - print string and newlione to stdout
 * @s: string to print
 *
 */

void rev_string(char *s)
{
	int x;
	int y;
	char z;

	for (x = 0; s[x]; x++)
		;

	for (y = 0; y < x; y++, x--)
	{
		z = s[x - 1];
		s[x - 1] = s[y];
		s[y] = z;
	}
}
