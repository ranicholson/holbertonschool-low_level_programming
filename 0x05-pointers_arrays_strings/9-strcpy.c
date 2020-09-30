#include "holberton.h"

/**
 * *_strcpy - function that copies tring to dest
 * @dest: target of copy
 * @src: pointing to a string
 * Return: the char dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
	{
		if (src[x] == '\0')
			dest[x] = '\0';

		else
			dest[x] = src[x];
	}
	return (dest);
}
