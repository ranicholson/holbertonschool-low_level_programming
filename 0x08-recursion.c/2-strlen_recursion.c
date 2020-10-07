#include "holberton.h"

/**
 * _strlen_recursion - find length of string
 * @s: string to find length of
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		x++;
	}

	return (x);
}
