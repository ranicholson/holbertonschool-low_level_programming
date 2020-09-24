#include "holberton.h"

/**
 * _isupper - determine if something is upp er olower case
 * @c: letter to determine case of
 * Return: 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);

	else
		return (0);
}
