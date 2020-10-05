#include "holberton.h"

/**
 * _strchr - function to locate character in string
 * @s: string to be searched
 * @c: character to search for
 * Return: pointer to first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}

	return ('\0');
}
