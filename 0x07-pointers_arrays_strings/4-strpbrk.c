#include "holberton.h"

/**
 * _strpbrk - searching a string for any set of bytes
 * @s: string to search
 * @accept: set of bytes to search for
 * Return: pointer to the first byte that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
	}

	return ('\0');
}
