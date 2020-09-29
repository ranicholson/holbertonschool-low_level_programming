#include "holberton.h"

/**
 * _strlen - determine the length of a string
 * @s: string to determine the length of
 * Return: should be the length
 *
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	return (l);
}
