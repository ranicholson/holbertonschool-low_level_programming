#include "holberton.h"

/**
 * _strspn - function to get length of prefix substring
 * @s: string to search
 * @accept: bytes to search s for
 * Return: length of strings that match
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;
	unsigned int z;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				break;
			}
		}

		if (s[x] != accept[y])
			break;
	}

	return (z);
}
