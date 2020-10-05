#include "holberton.h"

/**
 * _strspn - function to get length of prefix substring
 * @s: string to search
 * @accept: bytes to search s for
 * Return: length of strings that match
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int z;

	for (x = 0; accept[x]; x++)
	{
		for (y = 0; s[y]; y++)
		{
			if (s[y] == accept[x])
				z++;
		}
	}

	return (z);
}
