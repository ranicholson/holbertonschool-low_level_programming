#include "holberton.h"

/**
 * _strstr - function to locate substring
 * @haystack: string to search
 * @needle: substring to search for
 * Return: pointer to beginning of substring and null if there is no match
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int x;
	unsigned int y;

	for (x = 0; haystack[x]; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (needle[y] == '\0')
			return (haystack + x);
	}

	return ('\0');
}
