#include "holberton.h"

/**
 * _isalpha - Trying to determine if a character is lower case
 * @c: is the character to be checked
 * Return: 1 if lowercase or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
