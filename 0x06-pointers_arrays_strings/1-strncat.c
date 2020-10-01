#include "holberton.h"

/**
 * *_strcat - using it to concatenate stuff
 * @dest: destination to add on a string
 * @src: string to be added on
 * @n: maximum number of bytes to use
 * Return: Should be the completed string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x]; x++)
		;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}

	dest[x + y] = '\0';

	return (dest);
}
