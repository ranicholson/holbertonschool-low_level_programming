#include "holberton.h"

/**
 * _memcpy - function to copy memory area
 * @dest: destinion of memory to be copied
 * @src: source to be copied
 * @n: number of bytes to be copied
 * Return: destination string after completion of copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		if (src[x] == '\0')
			break;

		else
		dest[x] = src[x];
	}

	return (dest);
}
