#include "holberton.h"

/**
 * *_strcat - using it to concatenate stuff
 * @dest: destination to add on a string
 * @src: string to be added on
 * Return: Should be the completed string
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x]; x++)
		;

	for (y = 0; src[y]; y++)
	{
		dest[x++] = src[y];
	}

	dest[x] = '\0';

	return (dest);
}
