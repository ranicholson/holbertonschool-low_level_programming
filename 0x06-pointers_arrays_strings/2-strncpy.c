#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: destination for string to be copied to
 * @src: source string to be copied
 * @n: mavimum to be copied
 * Return: should be dest after copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
