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
		x++;
		x +=_strlen_recursion(s + 1);
	}

	return (x);
}
