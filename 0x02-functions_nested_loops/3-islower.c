#include "holberton.h"

/**
 * _islower - Trying to determine if a character is lower case
 * @c: is the character to be checked
 * Return: 1 if lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
